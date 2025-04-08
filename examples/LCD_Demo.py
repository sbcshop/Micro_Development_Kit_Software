''' Demo Code to test onboard LCD '''

from machine import Pin, SPI, ADC
import time
import st7789py as st7789 
import vga1_bold_16x32 as font

# Initialize SPI interface for TFT screen
spi = SPI(1, baudrate=40000000, sck=Pin(10), mosi=Pin(11))
tft = st7789.ST7789(
        spi, 240, 240, reset=Pin(9, Pin.OUT), cs=Pin(13, Pin.OUT), 
        dc=Pin(12, Pin.OUT), backlight=Pin(8, Pin.OUT), rotation=1
    )

time.sleep(0.5)  # Wait for half a second


"""Display text on TFT screen"""
tft.text(font, "HELLO WORLD!!", 15, 40, st7789.YELLOW)
tft.fill_rect(0, 72, 240, 5, st7789.RED)
time.sleep(0.5)

tft.text(font, "MICRO SERIES", 25, 120, st7789.CYAN)
tft.fill_rect(0, 152, 240, 5, st7789.GREEN)
time.sleep(2)

