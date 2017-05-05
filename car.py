# IMPORT MODULES
import RPi.GPIO as GPIO

# SET VARIABLES
pin = 8

# INITIALISE RPi.GPIO
GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)

# SETUP GPIO PINS
GPIO.setup(pin,GPIO.OUT) # RED LIGHT

# RED LIGHT
print "GO!"
GPIO.output(pin,GPIO.HIGH)

term = input("Type Y to terminate: ")

if term == "Y" or term == "y":
    GPIO.cleanup()
    print("GPIO pins reset")
    print("Script terminated")
