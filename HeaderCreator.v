module HeaderCreator (
    input clk,                  // Clock signal
    input en,                   // Enable signal
    input [15:0] data_in,       // Input data
    output reg [15:0] data_out  // Output data with header
);

    reg [15:0] fifo_memory [2:0];  // FIFO memory to store the data
    reg valid = 0;                 // Valid flag to indicate data processing
    reg [2:0] cycle_count = 0;     // Cycle counter for data processing

    // Initialize FIFO memory with default headers
    initial begin
        fifo_memory[0] <= 16'hffff;
        fifo_memory[1] <= 16'hffff;
        fifo_memory[2] <= 16'hffff;
    end

    // Always block triggered on the positive edge of the clock
    always @ (posedge clk) begin
        if (en) begin
            // Shift FIFO memory and insert new data
            data_out <= fifo_memory[2];
            fifo_memory[2] <= fifo_memory[1];
            fifo_memory[1] <= fifo_memory[0];
            fifo_memory[0] <= data_in;
            valid <= 1;                // Set valid flag
            cycle_count <= 0;          // Reset cycle counter
        end
        else if (valid) begin
            // Continue shifting FIFO memory if valid flag is set
            if (cycle_count < 3) begin
                cycle_count <= cycle_count + 1;
                data_out <= fifo_memory[2];
                fifo_memory[2] <= fifo_memory[1];
                fifo_memory[1] <= fifo_memory[0];
            end
            else begin
                // Reset valid flag and FIFO memory after processing 3 cycles
                valid <= 0;
                fifo_memory[0] <= 16'hffff;
                fifo_memory[1] <= 16'hffff;
                fifo_memory[2] <= 16'hffff;
            end
        end
    end

endmodule
