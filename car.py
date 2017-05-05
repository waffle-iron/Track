# IMPORT MODULES
import RPi.GPIO as GPIO

# SET VARIABLES
pin = 14

# INITIALISE RPi.GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

# SETUP GPIO PINS
GPIO.setup(pin,GPIO.OUT) # RED LIGHT

# RED LIGHT
print "GO!"
GPIO.output(pin,GPIO.HIGH)

term = str(input("Type Y to terminate: "))

if term == "Y" or term == "y":
    GPIO.cleanup()
    print("GPIO pins reset")
    print("Script terminated")
