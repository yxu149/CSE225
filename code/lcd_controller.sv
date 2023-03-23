module lcd_controller (
  input  [0:0] fpga_clk_i, 
  input  [0:0] fpga_reset_i, 

  input  [5:0] fpga_buttons_i, 
  
  output [7:0] lcd_data_o, 
  output [0:0] lcd_reset_o, 
  output [0:0] lcd_enable_o 
  );
  
  reg [0:0] lcd_data, lcd_reset, lcd_enable; 
  assign lcd_data_o = lcd_data; 
  assign lcd_reset_o = lcd_reset; 
  assign lcd_enable_o = lcd_enable; 
  
  always_comb begin
    
  end
  
  always_ff @(posedge fpga_clk_i) begin
    
  end
endmodule
