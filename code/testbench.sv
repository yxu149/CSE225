`timescale 1ns/1ps
module testbench();
  wire [0:0] clk_i, valid_i; 
  wire [7:0] data_i; 
  wire reset_i, enable_i; 
  nonsynth_clock_gen Clock (clk_i); 
  
  lcd_controller lcd_ctrl (
    .fpga_clk_i(clk_i), 
    .fpga_reset_i(1'b1), 
    
    .button_next_i(1'b0), 
    .button_ok_i(1'b0), 
    .button_prev_i(1'b0), 
    
    .valid_o(valid_i), 
    
    .lcd_data_o(data_i), 
    .lcd_reset_o(reset_i), 
    .lcd_enable_o(enable_i)
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
    $display("Initial Block");
    $display(data_i); 
    #400;  
    $finish();
  end
  
  final begin
    $finish();
  end
  
endmodule
