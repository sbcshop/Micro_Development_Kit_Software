''' Demo Code to test onboard Potentiometer and LED '''

from machine import Pin, ADC, PWM
import time

# Setup
'''
Potentiometer on ADC1 (GPIO27) - Pico RP2040,
Change GPIO pin for ESP32 micro S3, S2, C3 and C6
For Reference ADC pins checkout pinout details =>
https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main#pinout-and-interfacing-details
'''
pot = ADC(Pin(27))  		# ADC1 - GP27 for Pico, ADC1_CH0 - GP1 for ESP32 S3 Micro similarly change for others

# Setup LED on GPIO8 using PWM
led = PWM(Pin(8))
led.freq(1000)  # Set frequency to 1kHz

while True:
    pot_value = pot.read_u16()  # Read 16-bit analog value (0–65535)
    duty = int(pot_value / 256)  # Scale down to 0–255 for PWM duty
    led.duty_u16(pot_value)      # Directly use the full range for smoother brightness
    print("Pot value:", pot_value)
    time.sleep(0.1)
