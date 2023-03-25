module lcd_controller (
  input  [0:0] fpga_clk_i, 
  input  [0:0] fpga_reset_i, 
  
  // Buttons 
  input  [0:0] button_next_i, 
  input  [0:0] button_ok_i, 
  input  [0:0] button_prev_i, 
  
  // update FPGA output 
  output [0:0] valid_o, 

  output [7:0] lcd_data_o, 
  output [0:0] lcd_reset_o, 
  output [0:0] lcd_enable_o 
  );
  
  reg [0:0] lcd_reset, lcd_enable; 
  reg [7:0] lcd_data; 
  assign lcd_data_o = lcd_data; 
  assign lcd_reset_o = lcd_reset; 
  assign lcd_enable_o = lcd_enable; 

  reg [0:0] button_next, button_prev, button_ok; 

  enum {INIT, PAGE_1, PAGE_2, PAGE_3, PAGE_4, ERROR} State;

  reg [3:0] char_index; // 16 chars per line (use auto next)
  reg [0:0] line_index; // 2 lines (line 0 -> line 1)
  int step; 
  
  always_ff @(posedge fpga_clk_i) begin
    step <= step + 1; 
  end
  
  always_ff @(posedge fpga_clk_i) begin
    case (step) 
      // step 0-2
      // lcd display control & turn on
       0: begin
        lcd_data <= 8'b00110000;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      // latch it in
       2: begin
        lcd_data <= 8'b00110000;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      // open write again
      // step 3-4 set function 
      // 5*7, 2 line, 8 bits bus in
       3: begin 
        lcd_data <= 8'b00011100;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
       4: begin
        lcd_data <= 8'b00011100;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1;
      end
      // open write, 
      // step 5-6 entry mode set
      // write => shift right => ready
       5: begin
        lcd_data <= 8'b11100000;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1;  
      end
       6: begin 
        lcd_data <= 8'b11100000;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      // 7-9 lcd.clear
       7: begin
        lcd_data <= 8'b10000000;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
       9: begin
        lcd_data <= 8'b10000000;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      10: begin
        lcd_data <= 8'b00000001;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      11: begin
        lcd_data <= 8'b00000001;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      // 10-12 write "H" 
      20: begin
        lcd_data <= 8'b01001000;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      21: begin
        lcd_data <= 8'b01001000;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      22: begin
        lcd_data <= 8'h65;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      23: begin
        lcd_data <= 8'h65;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      24: begin
        lcd_data <= 8'h6C;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      25: begin
        lcd_data <= 8'h6C;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      26: begin
        lcd_data <= 8'h6C;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      27: begin
        lcd_data <= 8'h6C;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      28: begin
        lcd_data <= 8'h6F;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      29: begin
        lcd_data <= 8'h6F;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      30: begin
        lcd_data <= 8'h2C;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      31: begin
        lcd_data <= 8'h2C;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      32: begin
        lcd_data <= 8'h20;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      33: begin
        lcd_data <= 8'h20;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      34: begin
        lcd_data <= 8'h77;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      35: begin
        lcd_data <= 8'h77;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      36: begin
        lcd_data <= 8'h6F;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      37: begin
        lcd_data <= 8'h6F;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      38: begin
        lcd_data <= 8'h72;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      39: begin
        lcd_data <= 8'h72;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      40: begin
        lcd_data <= 8'h6C; 
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      41: begin
        lcd_data <= 8'h6C; 
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      42: begin
        lcd_data <= 8'h64;
        lcd_reset <= 1'b1; 
        lcd_enable <= 1'b1; 
      end
      43: begin
        lcd_data <= 8'h64;
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b1; 
      end
      50: begin
        lcd_data <= 8'h00; 
        lcd_reset <= 1'b0; 
        lcd_enable <= 1'b0; 
      end
      // hold state when step val is between 
      // defined key steps
      default : begin
        lcd_data <= lcd_data_o; 
        lcd_reset <= lcd_reset_o; 
        lcd_enable <= lcd_enable_o; 
      end
    endcase 
  end
  
  /*
  // State Def
  always_ff @(posedge fpga_clk_i) begin 
    case (State) 
      INIT : begin 
        // lcd.init 
        
        // lcd.begin

        // lcd.clear 
        
        // lcd.setCursor 

        // lcd.print 
        
      end 
      PAGE_1 : begin
        // lcd.clear 

        // lcd.setCursor

        // lcd.print 

      end
      PAGE_2 : begin
        // lcd.clear 

        // lcd.setCursor

        // lcd.print 

      end
      PAGE_3 : begin
        // lcd.clear 

        // lcd.setCursor

        // lcd.print 

      end
      PAGE_4 : begin
        // lcd.clear 

        // lcd.setCursor

        // lcd.print 
        
      end
      default : begin 
        // ERROR STATE 
        // lcd.clear 

        // lcd.setCursor 

        // lcd.print
        
      end
    endcase
  end 
  */
  /* 
  // State Control
  always_ff @(posedge fpga_clk_i) begin
    if (fpga_reset_i) begin
      State <= INIT; 
    end 
    else begin
      // Normal Ops
      case (State) 
        INIT : begin
          if (button_ok_i || button_next_i || button_prev_i) begin
            State <= PAGE_1; 
          end
          else begin
            State <= INIT; 
          end
        end
        PAGE_1 : begin
          if (button_next_i) begin
            State <= PAGE_2; 
          end
          else if (button_prev_i) begin
            State <= PAGE_4; 
          end 
          else begin
            State <= PAGE_1; 
          end
        end
        PAGE_2 : begin
          if (button_next_i) begin
            State <= PAGE_3; 
          end
          else if (button_prev_i) begin
            State <= PAGE_1; 
          end 
          else begin
            State <= PAGE_2; 
          end
        end
        PAGE_3 : begin
          if (button_next_i) begin
            State <= PAGE_4; 
          end
          else if (button_prev_i) begin
            State <= PAGE_2; 
          end 
          else begin
            State <= PAGE_3; 
          end
        end
        PAGE_4 : begin
          if (button_next_i) begin
            State <= PAGE_1; 
          end
          else if (button_prev_i) begin
            State <= PAGE_3; 
          end 
          else begin
            State <= PAGE_4; 
          end
        end
        default : begin
          State <= ERROR; 
        end
      endcase
    end
  end
  */ 
endmodule
