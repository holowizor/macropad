# macropad

There are two case designs in this repo
 - 3x2 with rotary encoder
 - 4x3 with two rotary encoders and place for oled lcd

Cases have square holes for rotary encoders - it might be better to change it to round holes and use screw to mount the encoders. Otherwise the mouting is not stable and may require glueing (ex. with hot glue).

# element list
 - controller: Pro Micro ATmega32U4 5V 16 MHz
 - display: oled SSD1306 128x32
 - 1N4148 diodes
 - any mechanical switches
 - EC11 rotary encoders (5 pin)

# code

I used QMK software as code base and any code provided is just extension/modification. See ex holowizor/macro6/readme.md for details on how to use the code or refer to QMK manuals when unclear.


# hints

Don't forget to connect gnd (middle) node from rotary encoder to gnd in microcontroller