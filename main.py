import RPi.GPIO as GPIO
import time


red = 18
amber = 23
green = 24
track = 25

GPIO.setmode(GPIO.BCM)
GPIO.setup(red,GPIO.OUT) # RED LIGHT
GPIO.setup(amber,GPIO.OUT) # AMBER LIGHT
GPIO.setup(green,GPIO.OUT) # GREEN LIGHT

start = raw_input("Would you like to start? (y/n): ")
if start == "y":

    GPIO.output(red,GPIO.HIGH)
    time.sleep(5)

    GPIO.output(amber,GPIO.HIGH)
    time.sleep(2)

    GPIO.output(red,GPIO.LOW)
    GPIO.output(amber,GPIO.LOW)
    GPIO.output(green,GPIO.HIGH)
    GPIO.output(track,GPIO.HIGH)

else:
    print("Goodbye!")
    exit()
