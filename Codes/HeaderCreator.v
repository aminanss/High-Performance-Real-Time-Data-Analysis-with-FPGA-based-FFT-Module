`timescale 1ns / 1ps
module Header(
    input clk,
    input en,
    input [15:0] inp,
    output reg [15:0] outp
    );

    reg [15:0] FIFOM [2:0];
    reg v = 0;
    reg [2:0] count = 0;
	//reg st = 1;
	integer i;

	initial begin
		FIFOM[0] <= 16'hffff;
		FIFOM[1] <= 16'hffff;
		FIFOM[2] <= 16'hffff;
	end

    always @ (posedge clk) begin
        if (en) begin
			/*if (st) begin
				for (i = 0; i < 3; i = i + 1) begin
            		FIFOM[i] <= 16'hffff;
        		end
				st <= 0;
			end
			else begin*/
            	outp <= FIFOM[2];
            	FIFOM[2] <= FIFOM[1];
            	FIFOM[1] <= FIFOM[0];
            	FIFOM[0] <= inp;
            	v <= 1;
            	count <= 0;
			//end
        end
        else if (v) begin
            if (count < 3) begin
                count <= count + 1;
                outp <= FIFOM[2];
                FIFOM[2] <= FIFOM[1];
                FIFOM[1] <= FIFOM[0];
            end
            else begin
                v <= 0;
				FIFOM[0] <= 16'hffff;
				FIFOM[1] <= 16'hffff;
				FIFOM[2] <= 16'hffff;
				//st <= 1;
            end
        end
    end

endmodule
