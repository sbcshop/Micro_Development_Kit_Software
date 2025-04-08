''' Demo Code to test onboard LED '''

from machine import Pin  
import time

led = Pin(7, Pin.OUT)    # Define GPIO8 as Output for LED connection

while True:
    led.on()  # Turn LED on 
    print("LED ON")
    time.sleep(0.5)  # wait
    
    led.off() # Turn LED off
    print("LED OFF")
    time.sleep(0.5)  # wait
    