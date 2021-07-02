import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)

LED = 11
GPIO.setup(LED,GPIO.OUT)
try:
    GPIO.output(LED,GPIO.HIGH)
finally:
    print("Cleanup")
    GPIO.cleanup()

