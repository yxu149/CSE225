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
endmodule
