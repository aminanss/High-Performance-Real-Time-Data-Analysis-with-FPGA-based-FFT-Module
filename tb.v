`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:30:00 07/02/2024
// Design Name:   Test
// Module Name:   D:/SUT/EE/8th Semester/ASIC and FPGA Chip Design - Shabany/Project/Phase 2/Check/Test_Header/tb.v
// Project Name:  Test_Header
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg en;
	reg [15:0] inp;

	// Outputs
	wire [15:0] outp_midi;
	wire [15:0] outp;

	// Instantiate the Unit Under Test (UUT)
	Test uut (
		.clk(clk), 
		.en(en), 
		.inp(inp), 
		.outp_midi(outp_midi),
		.outp(outp)
	);
	
	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 0;
		inp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		en = 1;
		inp = 100;
		
		#10;
		inp = 101;
		
		#10;
		inp = 102;
		
		#10;
		inp = 103;
		
		#10;
		inp = 104;
		
		#10;
		inp = 105;
		
		#10;
		inp = 106;
		
		#10;
		inp = 107;
		
		#10;
		inp = 108;
		
		#10;
		inp = 109;
		
		#10;
		en = 0;
		
		#40;
		en = 1;
		inp = 100;
		
		#10;
		inp = 101;
		
		#10;
		inp = 102;
		
		#10;
		inp = 103;
		
		#10;
		inp = 104;
		
		#10;
		inp = 105;
		
		#10;
		inp = 106;
		
		#10;
		inp = 107;
		
		#10;
		inp = 108;
		
		#10;
		inp = 109;
		
		#10;
		en = 0;
		
		

	end
      
endmodule

