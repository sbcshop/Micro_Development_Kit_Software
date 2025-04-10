# Micro_Development_Kit_Software
<img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/Main%20Banner.jpg" width="" height="">

Unlock the full potential of Microflex MCU boards with this all-in-one development kit—crafted for Micro S3, S2, C3, C6, RP2040 and compatible boards. Whether you're learning, teaching, or building, it's the perfect platform for discovery and innovation.

This GitHub provides getting started instructions and details about Micro Developement Kit.

## Key Features:
- Compatible with MicroFlex MCU boards - [Micro RP2040](https://shop.sb-components.co.uk/products/micro-flex-mcu-development-board?variant=41264939696211), [Micro S3](https://shop.sb-components.co.uk/products/micro-flex-mcu-development-board?variant=41264939597907), [Micro S2](https://shop.sb-components.co.uk/products/micro-flex-mcu-development-board?variant=41264939630675), [Micro C3](https://shop.sb-components.co.uk/products/micro-flex-mcu-development-board?variant=41264939663443) and [Micro C6](https://shop.sb-components.co.uk/products/micro-flex-mcu-development-board?variant=41264939565139).
- A compact and comprehensive kit with useful components onboard to make STEM learning easy and quick getting started.
- Development Kit equipped:
  - 4x Buttons
  - 4x RED LED
  - 1x Buzzer
  - 1x Potentiometer
  - 1.3" TFT LCD display
  - GPIOs breakout with Female and Male 2.54" Header
  - Additional Power Pins 5V, 3.3V and GND
  - Mini Breaboard 170 pts for additional hardware interfacing
- Most popular programming language MicroPython, CircuitPython, and Arduino supported.

### 📑 Table of Contents
1. [Hardware Overview](https://github.com/sbcshop/Micro_Development_Kit_Software/tree/main#pinout)
2. [Getting Started with Micro Development Kit](https://github.com/sbcshop/Micro_Development_Kit_Software/tree/main#getting-started-with-micro-development-kit)
    * [Lesson 1 : How to Blink LED]()
    * [Lesson 2 : Control LED with Button]()
    * [Lesson 3 : PWM LED and Buzzer control with Potentiometer]()
    * [Lesson 4 : Display Simple Text on LCD ]()
    * [Lesson 5 : Display Potentiometer and Button Status]()
 4. [Resources]()
 5. [Related Products]()

## Hardware Overview

<img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/MicroBreadboard_kit_Pinouts.jpg" width="" height="">

## Getting Started with Micro Development Kit
- Connect your MicroFlex MCU board with Kit as shown below,

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/MicroMCU_breadboardkit.png" width="337" height="280">

- Now follow corresponding steps to setup your board to use with MicroPython or Arduino =>
   - [MicroPython Setup for MicroFlex MCU ](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Micropython)
   - [Arduino Setup for MicroFlex MCU](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Arduino%20IDE)
- When particular MicroFlex MCU board connected on Dev kit check corresponding GPIOs mapped over physical pins.
  
  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/rp2040_pinmapped.png" width="265" height="170">
  
  For example, if Micro RP2040 connected =>
  | Physical Pin | Micro RP2040 | | Micro RP2040 | Physical Pin |
  |--------------|--------------|-|--------------|--------------|
  | 5V           | 5V           | | GP16         | 17           |
  | GND          | GND          | | GP17         | 16           |
  | 3V3          | 3V3          | | GP28         | 15           |
  | 1            | GP0          | | GP27         | 14           |
  | 2            | GP1          | | GP13         | 13           |
  | 3            | GP2          | | GP12         | 12           |
  | 4            | GP3          | | GP11         | 11           |
  | 5            | GP4          | | GP10         | 10           |
  | 6            | GP5          | | GP9          | 9            |
  | 7            | GP7          | | GP8          | 8            |

  Similarly, cross check for others Micro boards what GPIOs mapped with physical pins while doing hardware interfacing.
- Also, you can checkout more functional details of corresponding GPIOs breakout for [Micro RP2040](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main?tab=readme-ov-file#micro-rp2040), [Micro S3](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main#micro-s3), [Micro S2](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main#micro-s3), [Micro C3](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main?tab=readme-ov-file#micro-c3) and [Micro C6](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main?tab=readme-ov-file#micro-c3).

  
### 1. How to Blink LED
**Objective**: In this lesson we will try to blink onboard LED. 
- There are total four LEDs available. Connect MCU board on developement kit as discussed in above section
- Let suppose Micro RP2040 used, so make following hardware connection using jumper wire.
  |Kit Physical Pin | Micro RP2040 | Hardware |
  |-----------------|--------------|----------|
  | 7               | GP7          | LED1     |

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/led_wiring.jpg" width="352" height="283">

- Depending on your platform of choice you can use,
  * [Arduino code - LED Blink]()
  * [MicroPython code - LED Blink](https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/Micropython%20examples/LED_Blink.py)

- Select correct board with suitable COM port and upload code in case of **Arduino**

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rp2040_board_select.png" width="959" height="511">

  <img src="https://github.com/sbcshop/MicroFlex_MCU_Software/blob/main/images/rpi_port.png" width="516" height="372">
  
  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/arduino_ledBlink.jpg" width="959" height="509">

  Similarly, if using other MCU like ESP32 S3, S2, C3 or C6 then select board as shown in section [here](https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main/MicroFlex%20with%20Arduino%20IDE#micro-esp32---s3-s2-c3-and-c6)

- For **MicroPython** style coding, select suitable board and click green play button to run code or save code as **main.py** for standalone execution.

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/micropython_ledBlink.jpg" width="" height="">
 
### 2. Control LED with Button
**Objective**: In this lesson we will control LED ON/OFF using onboard Button switch.
- There are total four Button and LED onboard. For demo we will use SW1 and LED1.  
- Let suppose Micro RP2040 used, so make following hardware connection using jumper wire. 
  |Kit Physical Pin | Micro RP2040 | Hardware |
  |-----------------|--------------|----------|
  | 7               | GP7          | SW1      |  
  | 8               | GP8          | LED1     |

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/switch_led_wiring.jpg" width="464" height="383">

- Depending on your platform of choice you can use,
  * [Arduino code - LED Switch Control]()
  * [MicroPython code - LED Switch Control](https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/Micropython%20examples/LED_Switch_Demo.py)

- Once code uploaded, press and release button to see LED Blink.
  
### 3. PWM LED and Buzzer control with Potentiometer
**Objective**: In this lesson we will checkout concept of PWM using Potentiometer, LED and Buzzer interfacing with MicroFlex MCU.
- Make following hardware connection using jumper wire,
  |Kit Physical Pin | Micro RP2040 | Hardware |
  |-----------------|--------------|----------|
  | 5               | GP4          | LED1     |  
  | 7               | GP7          | BUZZ     |
  | 14              | GP27         | POT      |

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/pot_led_buzzer_wiring.jpg" width="489" height="382">

- Depending on platform select code,
  * [Arduino code - POT LED Buzzer interfacing]()
  * [MicroPython code - POT LED Buzzer interfacing](https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/Micropython%20examples/POT_LED_Buzzer_Demo.py)

- Rotate Potentiometer knob to see LED dimming and buzzer sound variation.
  
### 4. Display Simple Text on LCD 
**Objective**: In this lesson you can learn how to display simple text on LCD display.
- Follow the wiring connection below,
  |Kit Physical Pin | Micro RP2040 | Hardware |
  |-----------------|--------------|----------|
  | 8               | GP8          | LCD_BL   |  
  | 9               | GP9          | LCD_RST  |
  | 11              | GP11         | LCD_MOSI |
  | 10              | GP10         | LCD_CLK  |
  | 13              | GP13         | LCD_CS   |
  | 12              | GP12         | LCD_DC   |

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/lcd_wiring.jpg" width="459" height="382">

- Choose suitable code for demo, for LCD demo code there is dependency on some external library so make sure to transfer or installed files.
  * [Arduino code - LCD Display Demo]() - 
    
  * <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/lcd_wiring.jpg" width="459" height="382">

 
  * [MicroPython code - LCD Display Demo](https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/Micropython%20examples/LCD_Demo.py) - transfer [lib](https://github.com/sbcshop/Micro_Development_Kit_Software/tree/main/Micropython%20examples/lib) folder provided in github to MCU as shown,
   
    <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/upload_lib.png" width="959" height="510">
  
  
### 5. Display Potentiometer and Button Status
**Objective**: In this lesson value of potentiometer as voltage variation and button status displayed on TFT LCD.
- Follow the wiring connection below,
  |Kit Physical Pin | Micro RP2040 | Hardware |
  |-----------------|--------------|----------|
  | 8               | GP8          | LCD_BL   |  
  | 9               | GP9          | LCD_RST  |
  | 11              | GP11         | LCD_MOSI |
  | 10              | GP10         | LCD_CLK  |
  | 13              | GP13         | LCD_CS   |
  | 12              | GP12         | LCD_DC   |
  | 14              | GP27         | POT      |
  | 7               | GP7          | SW1      |

  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/lcd_pot_switch_wiring.jpg" width="454" height="384">

- Depending on your platform of choice you can use,
  * [Arduino code - Pot Button LCD interfacing]()
  * [MicroPython code - Pot Button LCD interfacing](https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/Micropython%20examples/LCD_Pot_Button.py)

- Rotate Potentiometer know to see real time value display on LCD and also press button to check status.
  <img src="https://github.com/sbcshop/Micro_Development_Kit_Software/blob/main/images/LCD_pot_btn_demo.jpg" width="333" height="231">
  
## Resources
  * [Schematic](https://github.com/sbcshop/Micro_Development_Kit_Hardware/blob/main/Design%20Data/Micro%20Breadboard%20kit%20SCH.PDF)
  * [Hardware Files](https://github.com/sbcshop/Micro_Development_Kit_Hardware)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)
  * [ESP32 for Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [Quick Reference Micropython for Pico](https://docs.micropython.org/en/latest/rp2/quickref.html)
  * [Quick Reference Micropython for ESP32](https://docs.micropython.org/en/latest/esp32/quickref.html)
       
## Related Products  
  
  * [ArdiPi - Uno R3 Alternative Board Based on Pico W](https://shop.sb-components.co.uk/products/ardipi-uno-r3-alternative-board-based-on-pico-w)

    ![ArdiPi](https://shop.sb-components.co.uk/cdn/shop/files/ARDIBACK.jpg?v=1688462154&width=150)

  * [Ardi32 - Uno R3 Alternative Board Based on ESP32-S3-WROOM-1](https://shop.sb-components.co.uk/products/ardi32-uno-r3-alternative-board-based-on-esp32-s3-wroom)

    ![Ardi32](https://shop.sb-components.co.uk/cdn/shop/files/esp321.jpg?v=1688468126&width=150)

  * [PiCoder - Compact DIY Raspberry Pi Pico W Learning Kit](https://shop.sb-components.co.uk/collections/pico-new-releases/products/picoder-compact-diy-raspberry-pi-pico-wh-learning-kit)

    ![PiCoder](https://shop.sb-components.co.uk/cdn/shop/files/shopimg2.jpg?v=1695883740&width=150)

  * [Raspberry Pi Pico Breadboard Kit With Pico 2](https://shop.sb-components.co.uk/products/raspberry-pi-pico-2-breadboard-kit)

    ![Raspberry Pi Pico Breadboard Kit](https://shop.sb-components.co.uk/cdn/shop/files/PICO_BREADBOARD_1.png?v=1726147415&width=150)

       
## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
