// Top-level design file for the icebreaker FPGA board
module top
  (input [0:0] clk_12mhz_i
  ,input [0:0] reset_n_async_unsafe_i
   // n: Negative Polarity (0 when pressed, 1 otherwise)
   // async: Not synchronized to clock
   // unsafe: Not De-Bounced
  ,input [3:1] button_async_unsafe_i
   // async: Not synchronized to clock
   // unsafe: Not De-Bounced
  ,input  [7:2] pmod_1b
  ,output [7:0] data_o
  ,output reset_o
  ,output enable_o
   );

   // These two D Flip Flops form what is known as a Synchronizer. We
   // will learn about these in Week 5, but you can see more here:
   // https://inst.eecs.berkeley.edu/~cs150/sp12/agenda/lec/lec16-synch.pdf
   wire reset_n_sync_r;
   wire reset_sync_r;
   wire reset_r; // Use this as your reset_signal
   dff
     #()
   sync_a
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(reset_n_async_unsafe_i)
     ,.q_o(reset_n_sync_r));

   inv
     #()
   inv
     (.a_i(reset_n_sync_r)
     ,.b_o(reset_sync_r));

   dff
     #()
   sync_b
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(reset_sync_r)
     ,.q_o(reset_r));
       
  // Your code goes here
  // for external inputs 
  reg button_reset, button_next, button_prev, button_ok, button_unused; 
  reg signal_reset, valid_i; 
  assign button_reset = pmod_1b[7]; 
  // for external inputs
  assign signal_reset = (button_reset || reset_r); 
  // since the reset button is broken
  
  lcd_controller lcd_ctrl (
    .fpga_clk_i(clk_12mhz_i), 
    .fpga_reset_i(signal_reset), 
    
    .button_next_i(pmod_1b[4]), 
    .button_ok_i(pmod_1b[5]), 
    .button_prev_i(pmod_1b[6]), 
    
    .valid_o(valid_i), 
    
    .lcd_data_o(data_o), 
    .lcd_reset_o(reset_o), 
    .lcd_enable_o(enable_o)
  ); 
  
endmodule
