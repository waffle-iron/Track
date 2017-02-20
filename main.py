import RPi.GPIO as GPIO
import time


red = 24
amber = 23
green = 8
track = 18

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

GPIO.setup(red,GPIO.OUT) # RED LIGHT
GPIO.setup(amber,GPIO.OUT) # AMBER LIGHT
GPIO.setup(green,GPIO.OUT) # GREEN LIGHT
GPIO.setup(track,GPIO.OUT) # TRACK POWER
pwm = GPIO.PWM(track, 500) # SET UP PWM MANAGEMENT

GPIO.output(red,GPIO.HIGH)
GPIO.output(amber,GPIO.LOW)
GPIO.output(green,GPIO.LOW)
GPIO.output(track,GPIO.LOW)
time.sleep(3)

GPIO.output(red,GPIO.HIGH)
GPIO.output(amber,GPIO.HIGH)
GPIO.output(green,GPIO.LOW)
GPIO.output(track,GPIO.LOW)
time.sleep(2)

GPIO.output(red,GPIO.LOW)
GPIO.output(amber,GPIO.LOW)
GPIO.output(green,GPIO.HIGH)
pwm.start(100)
