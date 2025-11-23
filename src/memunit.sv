import eei::*;
import corectrl::*;

module memunit (
	input logic clk,
	input logic rst,
	input logic valid,
	input logic is_new, //命令が新しく供給されたかどうか
	input InstCtrl ctrl, //命令のInstCtrl
	input Addr addr, //アクセスするアドレス
	input UIntX rs2, //ストア命令で書き込むデータ
	output UIntX rdata, //ロード命令の結果（stall=0の時有効）
	output logic stall, //メモリアクセス命令が完了していない
	core_data_if.master membus //メモリとのinterface
	);


	typedef enum logic[1:0]{
		Init, // 00
		WaitReady,//01
		WaitValid
	}State;

	State state;

	logic req_wen;
	Addr req_addr;
	logic [MEMBUS_DATA_WIDTH-1:0]          req_wdata;
	logic [(MEMBUS_DATA_WIDTH/8)-1:0]      req_wmask;
	logic req_is_amo;
	AMOOp req_amoop;
	logic req_aq;
	logic req_rl;
	logic [2:0] req_funct3 ;

	localparam int W = XLEN;
	logic [MEMBUS_DATA_WIDTH-1:0] D;
	logic sext;

	always_comb begin
		//funct3 [2:0]→Lの種類を決めている。
		D    = membus.rdata;
		sext = (ctrl.funct3[2] == 1'b0);//1xx→Unsigned系

		membus.valid  = state == WaitReady;
		membus.addr   = req_addr;
		membus.wen    = req_wen;
		membus.wdata  = req_wdata;
		membus.wmask  = req_wmask;
		membus.is_amo = req_is_amo;
		membus.amoop  = req_amoop;
		membus.aq     = req_aq;
		membus.rl     = req_rl;
		membus.funct3 = req_funct3;
		//Loadの結果
		case ( ctrl.funct3[1:0])
			2'b00:begin //LB,LBU
				case(addr[2:0])
					3'd0: rdata = {{(W-8){sext & D[7]}}, D[7:0]};
					3'd1: rdata = {{(W-8){sext & D[15]}}, D[15:8]};
					3'd2: rdata = {{(W-8){sext & D[23]}}, D[23:16]};
					3'd3: rdata = {{(W-8){sext & D[31]}}, D[31:24]};
					3'd4: rdata = {{(W-8){sext & D[39]}}, D[39:32]};
					3'd5: rdata = {{(W-8){sext & D[47]}}, D[47:40]};
					3'd6: rdata = {{(W-8){sext & D[55]}}, D[55:48]};
					3'd7: rdata = {{(W-8){sext & D[63]}}, D[63:56]};
					default: rdata = 'x;
				endcase
			end
			2'b01:begin //LH,LHU
				case(addr[2:0])
					3'd0: rdata = {{(W-16){sext & D[15]}}, D[15:0]};
					3'd2: rdata = {{(W-16){sext & D[31]}}, D[31:16]};
					3'd4: rdata = {{(W-16){sext & D[47]}}, D[47:32]};
					3'd6: rdata = {{(W-16){sext & D[63]}}, D[63:48]};
					default: rdata = 'x;
				endcase
			end
			2'b10:begin
				case(addr[2:0])
					3'd0: rdata = {{(W-32){sext & D[31]}}, D[31:0]};
					3'd4: rdata = {{(W-32){sext & D[63]}}, D[63:32]};
					default: rdata = 'x;
				endcase
			end
			2'b11  : rdata = D;
			default: rdata = 'x;
		endcase

		//stallの判定
		case (state)
        	Init:       stall = valid & (is_new && inst_is_memop(ctrl));
        	WaitReady:  stall = valid & 1'b1;
        	WaitValid:  stall = valid & ~membus.rvalid;
        	default:    stall = 1'b0;
    	endcase
	end

	always_ff @(posedge clk or negedge rst) begin
		if(!rst)begin
			state      <= Init;
			req_wen    <= 1'b0;
			req_addr   <= '0;
			req_wdata  <= '0;
			req_wmask  <= '0;
			req_is_amo <= '0;
			req_amoop  <= AMOOp'(0);
			req_aq     <= '0;
			req_rl     <= '0;
			req_funct3 <= '0;
		end else begin
			if (!valid)begin
				state <= Init;
			end else begin
				case(state)
					Init: begin
						if(is_new & inst_is_memop(ctrl))begin
							state    <= WaitReady;
							req_wen  <= inst_is_store(ctrl);
							req_addr <= addr;
							req_wdata<= rs2 << {addr[2:0],3'b0};
							case(ctrl.funct3[1:0])
								2'b00: req_wmask <= 8'b00000001 << addr[2:0];
								2'b01: begin
									case (addr[2:0])
										6: req_wmask <= 8'b11000000;
										4: req_wmask <= 8'b00110000;
										2: req_wmask <= 8'b00001100;
										0: req_wmask <= 8'b00000011;
										default: req_wmask <= 'x;
									endcase
								end
								2'b10: begin
									case (addr[2:0])
										0: req_wmask <= 8'b00001111;
										4: req_wmask <= 8'b11110000;
										default: req_wmask <= 'x;
									endcase
								end
								2'b11: req_wmask <= 8'b11111111;
								default: req_wmask <= 'x;
							endcase
							req_is_amo = ctrl.is_amo;
							req_amoop = AMOOp'(ctrl.funct7[6:2]);
							req_aq = ctrl.funct7[1];
							req_rl = ctrl.funct7[0];
							req_funct3 = ctrl.funct3;
						end
					end

					WaitReady : begin
						if(membus.ready)begin
							state <= WaitValid;
						end
					end
					WaitValid:begin
						if(membus.rvalid)begin
							state <= Init;
						end
					end
					default: begin
						//nothing
					end
				endcase
			end
		end
	end
endmodule:memunit
