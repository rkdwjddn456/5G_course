from tkinter import *

def myFunc() :
    if chk.get() == 1 :
        print("체크 버튼이 눌려졌습니다.")
    else :
        print("해제되었습니다.")



window = Tk()

window.title("체크 버튼 연습")
window.geometry("200x120")

chk = IntVar()
check1 = Checkbutton(window, text="Click Here!", variable=chk, command=myFunc)

check1.pack()

window.mainloop()


