# IMPORT MODULES
import RPi.GPIO as GPIO
import time

# SET VARIABLES
red = 23
amber = 24
green = 8
track = 18

# INITIALISE RPi.GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

# SETUP GPIO PINS
GPIO.setup(red,GPIO.OUT) # RED LIGHT
GPIO.setup(amber,GPIO.OUT) # AMBER LIGHT
GPIO.setup(green,GPIO.OUT) # GREEN LIGHT
GPIO.setup(track,GPIO.OUT) # TRACK POWER

# RED LIGHT
print "RED!"
GPIO.output(red,GPIO.HIGH)
GPIO.output(amber,GPIO.LOW)
GPIO.output(green,GPIO.LOW)
GPIO.output(track,GPIO.LOW)
time.sleep(3)

# RED AND AMBER LIGHTS
print "AMBER!"
GPIO.output(red,GPIO.HIGH)
GPIO.output(amber,GPIO.HIGH)
GPIO.output(green,GPIO.LOW)
GPIO.output(track,GPIO.LOW)
time.sleep(2)

# GREEN LIGHT AND TRACK POWER
print "GREEN!"
GPIO.output(red,GPIO.LOW)
GPIO.output(amber,GPIO.LOW)
GPIO.output(green,GPIO.HIGH)
GPIO.output(track,GPIO.HIGH)
time.sleep(5)

# CLEAN UP
print "Script ending, cleaning up GPIO pins. Please wait."
GPIO.cleanup()

# EXIT
print "Script ended."
