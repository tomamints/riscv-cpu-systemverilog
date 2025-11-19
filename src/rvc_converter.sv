import eei::*;
import inst_gen_pkg::*;

module rvc_converter (
    input  logic [15:0] inst16,
    output logic        is_rvc,
    output Inst         inst32   // expanded inst16
);

    // Decode helpers
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rs1d;
    logic [4:0] rs2d;

    logic [11:0] c0_mem_w;  // C.LW, C.SW
    logic [11:0] c0_mem_d;  // C.LD, C.SD

    logic [11:0] imm_i;
    logic [5:0]  imm_shamt;
    logic [19:0] imm_j;
    logic [11:0] imm_br;

    // Continuous assignments corresponding to Veryl `let`
    assign rs1  = inst16[11:7];
    assign rs2  = inst16[6:2];
    assign rs1d = {2'b01, inst16[9:7]};
    assign rs2d = {2'b01, inst16[4:2]};

    assign c0_mem_w = {5'b0, inst16[5], inst16[12:10], inst16[6], 2'b0};
    assign c0_mem_d = {4'b0, inst16[6:5], inst16[12:10], 3'b0};

    // sign-extended immediates
    assign imm_i     = { {7{inst16[12]}}, inst16[6:2] };
    assign imm_shamt = { inst16[12], inst16[6:2] };
    assign imm_j     = { {10{inst16[12]}}, inst16[8], inst16[10:9],
                         inst16[6], inst16[7], inst16[2], inst16[11], inst16[5:3] };
    assign imm_br    = { {5{inst16[12]}}, inst16[6:5], inst16[2],
                         inst16[11:10], inst16[4:3] };

    always_comb begin
        logic [2:0] funct3;

        is_rvc = (inst16[1:0] != 2'b11);
        inst32 = {16'b0, inst16};

        funct3 = inst16[15:13];

        case (inst16[1:0])  // opcode
            2'b00: begin
                case (funct3)  // C0
                    3'b000: begin  // C.ADDI4SPN
                        if (inst16 != 16'b0) begin
                            logic [9:0] nzuimm;
                            nzuimm = {inst16[10:7], inst16[12:11], inst16[5], inst16[6], 2'b0};
                            inst32 = addi(rs2d, 5'd2, {2'b0, nzuimm});
                        end
                    end
                    3'b010: begin
                        inst32 = load(rs2d, rs1d, c0_mem_w, 3'b010);  // C.LW
                    end
                    3'b011: begin
                        if (XLEN >= 64) begin  // C.LD
                            inst32 = load(rs2d, rs1d, c0_mem_d, 3'b011);
                        end
                    end
                    3'b110: begin
                        inst32 = store(rs1d, rs2d, c0_mem_w, 3'b010);  // C.SW
                    end
                    3'b111: begin
                        if (XLEN >= 64) begin  // C.SD
                            inst32 = store(rs1d, rs2d, c0_mem_d, 3'b011);
                        end
                    end
                    default: begin
                    end
                endcase
            end

            2'b01: begin
                case (funct3)  // C1
                    3'b000: begin
                        inst32 = addi(rs1, rs1, imm_i);  // C.ADDI
                    end
                    3'b001: begin  // C.JAL / C.ADDIW
                        if (XLEN == 32) begin
                            inst32 = jal(5'd1, imm_j);
                        end else begin
                            inst32 = addiw(rs1, rs1, imm_i);
                        end
                    end
                    3'b010: begin
                        inst32 = addi(rs1, 5'd0, imm_i);  // C.LI
                    end
                    3'b011: begin
                        if (rs1 == 5'd2) begin  // C.ADDI16SP
                            logic [9:0] imm;
                            imm = {inst16[12], inst16[4:3], inst16[5],
                                   inst16[2], inst16[6], 4'b0};
                            inst32 = addi(5'd2, 5'd2, {{2{imm[9]}}, imm});
                        end else begin  // C.LUI
                            inst32 = lui(rs1, {{8{imm_i[11]}}, imm_i});
                        end
                    end
                    3'b100: begin
                        case (inst16[11:10])  // funct2 or funct6[1:0]
                            2'b00: begin
                                if (!((XLEN == 32) && (imm_shamt[5] == 1'b1))) begin
                                    inst32 = srli(rs1d, rs1d, imm_shamt);  // C.SRLI
                                end
                            end
                            2'b01: begin
                                if (!((XLEN == 32) && (imm_shamt[5] == 1'b1))) begin
                                    inst32 = srai(rs1d, rs1d, imm_shamt);  // C.SRAI
                                end
                            end
                            2'b10: begin
                                inst32 = andi(rs1d, rs1d, imm_i);  // C.ADNI (ANDI)
                            end
                            2'b11: begin
                                if (inst16[12] == 1'b0) begin
                                    case (inst16[6:5])
                                        2'b00: begin
                                            inst32 = sub(rs1d, rs1d, rs2d);  // C.SUB
                                        end
                                        2'b01: begin
                                            inst32 = inst_xor(rs1d, rs1d, rs2d);  // C.XOR
                                        end
                                        2'b10: begin
                                            inst32 = inst_or(rs1d, rs1d, rs2d);   // C.OR
                                        end
                                        2'b11: begin
                                            inst32 = inst_and(rs1d, rs1d, rs2d);  // C.AND
                                        end
                                        default: begin
                                        end
                                    endcase
                                end else begin
                                    if (XLEN >= 64) begin
                                        if (inst16[6:5] == 2'b00) begin
                                            inst32 = subw(rs1d, rs1d, rs2d);  // C.SUBW
                                        end else if (inst16[6:5] == 2'b01) begin
                                            inst32 = addw(rs1d, rs1d, rs2d);  // C.ADDW
                                        end
                                    end
                                end
                            end
                            default: begin
                            end
                        endcase
                    end
                    3'b101: begin
                        inst32 = jal(5'd0, imm_j);  // C.J
                    end
                    3'b110: begin
                        inst32 = beq(rs1d, 5'd0, imm_br);  // C.BEQZ
                    end
                    3'b111: begin
                        inst32 = bne(rs1d, 5'd0, imm_br);  // C.BNEZ
                    end
                    default: begin
                    end
                endcase
            end

            2'b10: begin
                case (funct3)  // C2
                    3'b000: begin
                        if (!((XLEN == 32) && (imm_shamt[5] == 1'b1))) begin
                            inst32 = slli(rs1, rs1, imm_shamt);  // C.SLLI
                        end
                    end
                    3'b010: begin  // C.LWSP
                        if (rs1 != 5'd0) begin
                            logic [7:0] offset;
                            offset = {inst16[3:2], inst16[12], inst16[6:4], 2'b0};
                            inst32 = load(rs1, 5'd2, {4'b0, offset}, 3'b010);
                        end
                    end
                    3'b011: begin  // C.LDSP
                        if ((XLEN >= 64) && (rs1 != 5'd0)) begin
                            logic [8:0] offset;
                            offset = {inst16[4:2], inst16[12], inst16[6:5], 3'b0};
                            inst32 = load(rs1, 5'd2, {3'b0, offset}, 3'b011);
                        end
                    end
                    3'b100: begin
                        if (inst16[12] == 1'b0) begin
                            // C.JR / C.MV
                            if (rs2 == 5'd0) begin
                                inst32 = jalr(5'd0, rs1, 12'd0);  // C.JR
                            end else begin
                                inst32 = addi(rs1, rs2, 12'd0);   // C.MV
                            end
                        end else begin
                            // C.EBREAK / C.JALR / C.ADD
                            if (rs2 == 5'd0) begin
                                if (rs1 == 5'd0) begin
                                    inst32 = ebreak();             // C.EBREAK
                                end else begin
                                    inst32 = jalr(5'd1, rs1, 12'd0);  // C.JALR
                                end
                            end else begin
                                inst32 = add(rs1, rs1, rs2);      // C.ADD
                            end
                        end
                    end
                    3'b110: begin  // C.SWSP
                        logic [7:0] offset;
                        offset = {inst16[8:7], inst16[12:9], 2'b0};
                        inst32 = store(5'd2, rs2, {4'b0, offset}, 3'b010);
                    end
                    3'b111: begin  // C.SDSP
                        if (XLEN >= 64) begin
                            logic [8:0] offset;
                            offset = {inst16[9:7], inst16[12:10], 3'b0};
                            inst32 = store(5'd2, rs2, {3'b0, offset}, 3'b011);
                        end
                    end
                    default: begin
                    end
                endcase
            end

            default: begin
            end
        endcase
    end

endmodule
