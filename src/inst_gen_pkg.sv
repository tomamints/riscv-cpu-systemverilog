import eei::*;

package inst_gen_pkg;

    function Inst add (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0000000, rs2, rs1, 3'b000, rd, OP_OP};
    endfunction

    function Inst addw (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0000000, rs2, rs1, 3'b000, rd, OP_OP_32};
    endfunction

    function Inst addi (input logic [4:0] rd, input logic [4:0] rs1, input logic [11:0] imm);
        return {imm, rs1, 3'b000, rd, OP_OP_IMM};
    endfunction

    function Inst addiw (input logic [4:0] rd, input logic [4:0] rs1, input logic [11:0] imm);
        return {imm, rs1, 3'b000, rd, OP_OP_IMM_32};
    endfunction

    function Inst sub (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0100000, rs2, rs1, 3'b000, rd, OP_OP};
    endfunction

    function Inst subw (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0100000, rs2, rs1, 3'b000, rd, OP_OP_32};
    endfunction

    function Inst inst_xor (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0000000, rs2, rs1, 3'b100, rd, OP_OP};
    endfunction

    function Inst inst_or (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0000000, rs2, rs1, 3'b110, rd, OP_OP};
    endfunction

    function Inst inst_and (input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        return {7'b0000000, rs2, rs1, 3'b111, rd, OP_OP};
    endfunction

    function Inst andi (input logic [4:0] rd, input logic [4:0] rs1, input logic [11:0] imm);
        return {imm, rs1, 3'b111, rd, OP_OP_IMM};
    endfunction

    function Inst slli (input logic [4:0] rd, input logic [4:0] rs1, input logic [5:0] shamt);
        return {6'b000000, shamt, rs1, 3'b001, rd, OP_OP_IMM};
    endfunction

    function Inst srli (input logic [4:0] rd, input logic [4:0] rs1, input logic [5:0] shamt);
        return {6'b000000, shamt, rs1, 3'b101, rd, OP_OP_IMM};
    endfunction

    function Inst srai (input logic [4:0] rd, input logic [4:0] rs1, input logic [5:0] shamt);
        return {6'b010000, shamt, rs1, 3'b101, rd, OP_OP_IMM};
    endfunction

    function Inst lui (input logic [4:0] rd, input logic [19:0] imm);
        return {imm, rd, OP_LUI};
    endfunction

    function Inst load (input logic [4:0] rd, input logic [4:0] rs1,
                        input logic [11:0] imm, input logic [2:0] funct3);
        return {imm, rs1, funct3, rd, OP_LOAD};
    endfunction

    function Inst store (input logic [4:0] rs1, input logic [4:0] rs2,
                         input logic [11:0] imm, input logic [2:0] funct3);
        return {imm[11:5], rs2, rs1, funct3, imm[4:0], OP_STORE};
    endfunction

    function Inst jal (input logic [4:0] rd, input logic [19:0] imm);
        return {imm[19], imm[9:0], imm[10], imm[18:11], rd, OP_JAL};
    endfunction

    function Inst jalr (input logic [4:0] rd, input logic [4:0] rs1, input logic [11:0] imm);
        return {imm, rs1, 3'b000, rd, OP_JALR};
    endfunction

    function Inst beq (input logic [4:0] rs1, input logic [4:0] rs2, input logic [11:0] imm);
        return {imm[11], imm[9:4], rs2, rs1, 3'b000, imm[3:0], imm[10], OP_BRANCH};
    endfunction

    function Inst bne (input logic [4:0] rs1, input logic [4:0] rs2, input logic [11:0] imm);
        return {imm[11], imm[9:4], rs2, rs1, 3'b001, imm[3:0], imm[10], OP_BRANCH};
    endfunction

    function Inst ebreak ();
        return 32'h00100073;
    endfunction

endpackage
