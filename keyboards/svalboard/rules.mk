# MCU name
MCU = RP2040
BOOTLOADER = rp2040

CUSTOM_MATRIX = lite
SRC += matrix.c

SERIAL_DRIVER = vendor

PS2_MOUSE_ENABLE = yes
PS2_ENABLE = yes
PS2_DRIVER = interrupt
