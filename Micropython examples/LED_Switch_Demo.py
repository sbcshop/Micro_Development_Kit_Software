''' Demo Code to test onboard Switch and LED '''

from machine import Pin  
import time

button = Pin(7, Pin.IN)  # Define GPIO7 as Input for switch connection
led = Pin(8, Pin.OUT)    # Define GPIO8 as Output for LED connection

while True:
    if button.value() == 0:  # Button pressed (active low)
        led.on()
        print("Button Pressed!")
    else:
        led.off()
    time.sleep(0.1)  # wait, to avoid debounce
