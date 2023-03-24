`timescale 1ns/1ps
module testbench();
  wire [0:0] clk_i; 
  wire [7:0] data_i; 
  wire reset_i, enable_i; 
  nonsynth_clock_gen Clock (clk_i); 
  top Top (
    .clk_12mhz_i(clk_i), 
    .reset_n_async_unsafe_i(1'b1), 
    .button_async_unsafe_i(3'b1), 
    .pmod_1b(6'b0), 
    .data_o(data_i), 
    .reset_o(reset_i), 
    .enable_o(enable_i)
    ); 
  initial begin
  // Leave this code alone, it generates the waveforms
`ifdef VERILATOR
    $dumpfile("verilator.fst");
`else
    $dumpfile("iverilog.vcd");
`endif
    $dumpvars;
    // Put your testbench code here. Print all of the test cases and
    // their correctness.

    $finish();
  end
  
  final begin
    
  end
  
endmodule
