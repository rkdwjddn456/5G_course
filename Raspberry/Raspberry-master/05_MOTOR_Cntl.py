# p - 11 n- 13 en -15

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)

M_P = 11
M_N = 13
M_EN = 15
dc = [0,1,2,3,4,5,6,7,8,9,10,12,13,15,20,30,50,70,100]

GPIO.setup(M_P,GPIO.OUT , initial = GPIO.LOW)
GPIO.setup(M_N,GPIO.OUT, initial = GPIO.HIGH)
GPIO.setup(M_EN,GPIO.OUT)

p = GPIO.PWM(M_EN,100) # freq = 100Hz
p.start(0) # dutycycle = 0

try:
    while True:
        for val in dc:
            p.ChangeDutyCycle(val)
            time.sleep(0.1)
        #dc.reverse()
        
except KeyboardInterrupt:
    p.stop()
finally:
    print("Cleanup")
    GPIO.cleanup()



