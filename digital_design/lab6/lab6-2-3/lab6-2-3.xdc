##Switches
set_property -dict { PACKAGE_PIN V17   IOSTANDARD LVCMOS33 } [get_ports { I_par[0] }];
set_property -dict { PACKAGE_PIN V16   IOSTANDARD LVCMOS33 } [get_ports { I_par[1] }];
set_property -dict { PACKAGE_PIN W16   IOSTANDARD LVCMOS33 } [get_ports { I_par[2] }];
set_property -dict { PACKAGE_PIN W17   IOSTANDARD LVCMOS33 } [get_ports { I_par[3] }];
set_property -dict { PACKAGE_PIN W15   IOSTANDARD LVCMOS33 } [get_ports { s0 }];
set_property -dict { PACKAGE_PIN V15   IOSTANDARD LVCMOS33 } [get_ports { s1 }];
set_property -dict { PACKAGE_PIN W14   IOSTANDARD LVCMOS33 } [get_ports { LSB_in }];
set_property -dict { PACKAGE_PIN W13   IOSTANDARD LVCMOS33 } [get_ports { MSB_in }];
## LEDs
set_property -dict { PACKAGE_PIN U16   IOSTANDARD LVCMOS33 } [get_ports { A_par[0] }];
set_property -dict { PACKAGE_PIN E19   IOSTANDARD LVCMOS33 } [get_ports { A_par[1] }];
set_property -dict { PACKAGE_PIN U19   IOSTANDARD LVCMOS33 } [get_ports { A_par[2] }];
set_property -dict { PACKAGE_PIN V19   IOSTANDARD LVCMOS33 } [get_ports { A_par[3] }];
## Clock signal
set_property -dict { PACKAGE_PIN W5    IOSTANDARD LVCMOS33 } [get_ports { CLK }];
create_clock -period 10.00 -waveform {0 5} [get_ports {CLK}];
## Reset
set_property -dict { PACKAGE_PIN U18   IOSTANDARD LVCMOS33 } [get_ports { Clear_b }];
