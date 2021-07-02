import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)

LED = 11
GPIO.setup(LED,GPIO.OUT)
try:
    while True:
        GPIO.output(LED,GPIO.LOW)
finally:
    print("Cleanup")
    GPIO.cleanup()
