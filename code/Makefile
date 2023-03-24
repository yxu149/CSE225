# LCD Project
TOP_MODULE = lcd_controller
SYNTH_SOURCES += top.sv
SYNTH_SOURCES += ../provided_modules/inv.sv
SYNTH_SOURCES += ../provided_modules/dff.sv
NONSYNTH_SOURCES += ../provided_modules/nonsynth_clock_gen.sv
SYNTH_SOURCES += $(TOP_MODULE).sv
-include ../simulation.mk
-include ../fpga.mk

