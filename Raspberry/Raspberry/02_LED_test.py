import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)

LED = 11
GPIO.setup(LED,GPIO.OUT)

try:
    while True:
        GPIO.output(LED,GPIO.HIGH)
        time.sleep(0.5)
        GPIO.output(LED,GPIO.LOW)
        time.sleep(0.5)
except KeyboardInterrupt:
    print("Keyboard exception")
finally:
    print("Cleanup")
    GPIO.cleanup()