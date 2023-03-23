# CSE225
LCD Project Repo

# Purpose
This is a SystemVerilog implementation of a 16*2 LCD matrix display (1602a) meant for the IceBreaker 1.0 FPGA boards. 

# Files 
## lcd_controller.sv
This is the main module. It acts in three main ways: 
### Driver
This module controls how, when and what data is transmitted from the FPGA. For now it will cycle between 6 different states. 
### State Editor
This module is developed with customization and future expansion in mind. States and their transitions between themselves are defined in the module. 
### String Interpreter and Custom Characters
(Planned) This module will contain an ASCII to 1602a lookup table
## top.sv
This is the "top.sv" module. It acts as a proto-OS for various modules inside. 
