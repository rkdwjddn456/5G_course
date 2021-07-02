from tkinter import *

def LED_Cntl():
    print("LED ON, LED OFF")

window =Tk() #위젯 창을 만들어주는 클래스

#화면을 구성하고 처리하는 코드
window.title("윈도우 창 연습")
#window.geometry("400x100")
#window.resizable(width = FALSE , height=FALSE)

button1 = Button(window,text = "창 닫기", fg ='red',command = quit)
button2 = Button(window,text = "LED Cntl", fg ='red',command = LED_Cntl())

button1.pack()
button2.pack()

window.mainloop()