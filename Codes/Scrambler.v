`timescale 1ns / 1ps
module scrambler(
    input clk,
    input en,
    input [15:0] inp,
    output reg [15:0] outp
    );

    reg [17:0] X = 18'h00001;
    reg [17:0] Y = 18'h3ffff;
    wire x_feed, x_ff;
	 wire y_feed, y_ff;
    wire z_ni, z_ni2;
	 wire [1:0] R_n;

	 assign x_feed 	= X[0] ^ X[7];
	 assign y_feed 	= Y[10] ^ Y[7] ^ Y[5] ^ Y[0];

	 assign x_ff 		= X[4] ^ X[6] ^ X[15];
	 assign y_ff 		= Y[5] ^ Y[6] ^ Y[8] ^ Y[9] ^ Y[10] ^ Y[11] ^ Y[12] ^ Y[13] ^ Y[14] ^ Y[15];

	 assign z_ni 		= X[0] ^ Y[0];
	 assign z_ni2 		= x_ff ^ y_ff;

	 assign R_n 		= z_ni +(z_ni2 << 1);

    always @(posedge clk)begin
	     outp <= 0;
        if(en)begin
				X 			<= {x_feed, X[17:1]};
				Y 			<= {y_feed, Y[17:1]};
            outp 		<= (R_n == 0) ? inp:
							(R_n == 1) ? {inp[7:0], -inp[15:8]}:
							(R_n == 2) ? -inp:
							(R_n == 3) ? {-inp[7:0], inp[15:8]}:
							inp;
        end    
    end
  
endmodule
