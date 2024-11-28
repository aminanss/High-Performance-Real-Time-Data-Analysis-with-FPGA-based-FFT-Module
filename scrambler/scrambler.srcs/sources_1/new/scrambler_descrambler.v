module scrambler(
    input clk,
    input enable,
    input [15:0] in,
    output reg [15:0] out
    );

    // Defining parameters for scrambler
    wire FF_X, FF_Y;
    wire FB_X, FB_Y;
    wire NI_Z, NI_Z2;
    wire [1:0] R_n;
    reg [17:0] X;
    reg [17:0] Y;
    
    // Initial values
    initial 
    begin
        X = 18'h00001;
        Y = 18'h3ffff;
    end

	 // Assignments
	 assign FB_X 	= X[0] ^ X[7];
	 assign FB_Y 	= Y[10] ^ Y[7] ^ Y[5] ^ Y[0];
	 assign FF_X 		= X[4] ^ X[6] ^ X[15];
	 assign FF_Y 		= Y[5] ^ Y[6] ^ Y[8] ^ Y[9] ^ Y[10] ^ Y[11] ^ Y[12] ^ Y[13] ^ Y[14] ^ Y[15];
	 assign NI_Z 		= X[0] ^ Y[0];
	 assign NI_Z2 		= FF_X ^ FF_Y;
	 assign R_n 		= NI_Z +(NI_Z2 << 1);

    always @(posedge clk)
    begin
        out <= 0;
        if(enable)
        begin
        X 	<=  {FB_X, X[17:1]};
        Y 	<=  {FB_Y, Y[17:1]};
        out <=  (R_n == 0) ? in:
                (R_n == 1) ? {in[7:0], -in[15:8]}:
                (R_n == 2) ? -in:
                (R_n == 3) ? {-in[7:0], in[15:8]}:
                in;
        end    
    end
  
endmodule
