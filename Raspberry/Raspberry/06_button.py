from tkinter import *

def LED_Cntl() :
    print("LED ON/OFF")


window = Tk()

window.title("윈도우 버튼 연습")
window.geometry("100x80")

button1 = Button(window, text="창 닫기", width=6, height=3, font=("맑은고딕", 13), bg="#ff0000", fg="#0000ff", command=quit)
button2 = Button(window, text="LED Cntl", width=6, height=3, font=("맑은고딕", 13), fg="#00ff00", command=LED_Cntl)


button1.pack()
button2.pack()


window.mainloop()