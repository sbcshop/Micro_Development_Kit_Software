''' Demo Code to test onboard Potentiometer, Buzzer and LED '''

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
buzzer = PWM(Pin(8))        # Buzzer on GPIO8
buzzer.duty_u16(32768)      # Set buzzer to 50% duty cycle

led = PWM(Pin(7))           # LED on GPIO7
led.freq(1000)              # LED PWM frequency

while True:
    value = pot.read_u16()  # Read potentiometer (0 - 65535)
    
    # Control buzzer frequency from 200Hz to 2000Hz
    freq = int((value / 65535) * 1800) + 200
    buzzer.freq(freq)

    # Control LED brightness (0 - 65535)
    led.duty_u16(value)

    print("Pot:", value, "| Freq:", freq)
    time.sleep(0.1)
