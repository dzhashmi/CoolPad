# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# Key Matrix
MATRIX_DRIVER = custom # We will define pins in info.json

# Features
MOUSEKEY_ENABLE = yes   # Mouse keys (optional)
EXTRAKEY_ENABLE = yes   # Audio control and System control
CONSOLE_ENABLE  = yes   # Console for debug
COMMAND_ENABLE  = no    # Commands for debug and configuration
NKRO_ENABLE     = yes   # USB N-Key Rollover

# Nexus Pad Specifics
ENCODER_ENABLE  = yes   # Enable the Rotary Encoder
OLED_ENABLE     = yes   # Enable the OLED Screen
RGBLIGHT_ENABLE = yes   # Enable the underglow LEDs
WS2812_DRIVER_REQUIRED = yes # Required for RP2040 LEDs