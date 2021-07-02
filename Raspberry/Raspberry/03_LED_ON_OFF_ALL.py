import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
#GPIO.setwarnings(False) #워닝메세지 안뜨게해줌

LED = [11,13,15,29,31,33,35,37]
GPIO.setup(LED,GPIO.OUT)
try:
    while True:
        for i in range(0,8):
            GPIO.output(LED[i],GPIO.HIGH)
            time.sleep(0.5)
            GPIO.output(LED[i],GPIO.LOW)
            time.sleep(0.5)
            
        for i in range(6,0,-1):
            GPIO.output(LED[i],GPIO.HIGH)
            time.sleep(0.5)
            GPIO.output(LED[i],GPIO.LOW)
            time.sleep(0.5)
finally:
    print("Cleanup")
    GPIO.cleanup()