''' Demo Code to use LCD, Potentiometer and Button '''

from machine import Pin, SPI, ADC
import time
import st7789py as st7789
import vga1_bold_16x32 as font

# === Setup SPI & TFT Display ===
spi = SPI(1, baudrate=40000000, sck=Pin(10), mosi=Pin(11))
tft = st7789.ST7789(
    spi, 240, 240,
    reset=Pin(9, Pin.OUT),
    cs=Pin(13, Pin.OUT),
    dc=Pin(12, Pin.OUT),
    backlight=Pin(8, Pin.OUT),
    rotation=1
)

# === Initialize peripherals ===
pot = ADC(Pin(27))         # GP27 - ADC0 for Pico, change for ESP32 based micro
button = Pin(7, Pin.IN, Pin.PULL_UP)  # GP7 with pull-up

tft.fill(st7789.BLACK)
time.sleep(0.5)

# === Static Text ===
tft.text(font, "MicroFlex Kit", 20, 10, st7789.CYAN)
tft.fill_rect(0, 45, 240, 2, st7789.RED)

# === Main Loop ===
while True:
    pot_value = pot.read_u16()  # 16-bit value (0 - 65535)
    voltage = (pot_value / 65535) * 3.3  # Convert to voltage approx

    # Clear area where pot value is shown
    tft.fill_rect(0, 60, 240, 40, st7789.BLACK)
    tft.text(font, "Pot: {:.2f} V".format(voltage), 20, 60, st7789.YELLOW)

    # Check button
    if button.value() == 0:  # Button pressed (active LOW)
        tft.fill_rect(0, 110, 240, 40, st7789.BLACK)
        tft.text(font, "Button Pressed!", 10, 110, st7789.GREEN)
    else:
        tft.fill_rect(0, 110, 240, 40, st7789.BLACK)

    time.sleep(0.2)
