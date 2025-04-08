from machine import Pin
from neopixel import NeoPixel
from time import sleep

'''
Change based on board
=> GP45 (Micro S3), GP42 (Micro S2), GP23 (Micro C6), GP10 (Micro C3), GP6 (Micro RP2040)
'''
pin = Pin(6, Pin.OUT)   # set GPIO as output to drive NeoPixels
np = NeoPixel(pin, 1)    # create NeoPixel driver

np[0] = (255, 255, 255) # set the first pixel to white
np.write()              # write data to all pixels
r, g, b = np[0]         # get first pixel colour
print(f"R {r}, G {g}, B {b}")
sleep(1)

np[0] = (255, 0, 0) 	# set the first pixel to RED
np.write()              # write data to all pixels
r, g, b = np[0]         # get first pixel colour
print(f"R {r}, G {g}, B {b}")
sleep(1)				# delay about 1 sec

np[0] = (0, 255, 0) 	# set the first pixel to GREEN
np.write()          
sleep(1)

np[0] = (0, 0, 255) 	# set the first pixel to BLUE
np.write()              # write data to all pixels
sleep(1)

while 1: 
    np[0] = (0, 255, 255) 
    np.write()                    
    sleep(0.5)  #delay about 0.5sec

    np[0] = (255, 0, 255) 
    np.write()                     
    sleep(0.5)

    np[0] = (255, 255, 0) 	
    np.write()              
    sleep(0.5)

