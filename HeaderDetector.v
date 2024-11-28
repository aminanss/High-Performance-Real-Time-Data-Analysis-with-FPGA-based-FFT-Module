`timescale 1ns / 1ps
module Detector(
    input clk,
    input [15:0] inp,
    output [15:0] outp
    );

    assign outp = (v) ? inp : 16'd0;

    reg [1:0] state = 0;
    reg [9:0] count = 0;
    reg v = 0;

    always @ (posedge clk) begin
        case (state)
            0: begin
                if (inp == 16'hffff) state <= 1;
            end
            1: begin
                if (inp == 16'hffff) state <= 2;
                else state <= 0;
            end
            2: begin
                if (inp == 16'hffff) begin
                    state <= 3;
                    count <= 0;
                    v <= 1;
                end
                else state <= 0;
            end
            3: begin
                if (count < 9) begin
                    count <= count + 1;
                end
                else begin
                    state <= 0;
                    v <= 0;
                end
            end
        endcase
    end

endmodule
