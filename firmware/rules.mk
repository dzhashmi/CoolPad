# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# Key Matrix
MATRIX_DRIVER = custom 

# Features
MOUSEKEY_ENABLE = yes   
EXTRAKEY_ENABLE = yes   
CONSOLE_ENABLE  = yes   
COMMAND_ENABLE  = no    
NKRO_ENABLE     = yes   

ENCODER_ENABLE  = yes   #Enable the Rotary Encoder
OLED_ENABLE     = yes   #Enable the OLED Screen
RGBLIGHT_ENABLE = yes   #Enable the underglow LEDs

WS2812_DRIVER_REQUIRED = yes # Required for RP2040 LEDs
