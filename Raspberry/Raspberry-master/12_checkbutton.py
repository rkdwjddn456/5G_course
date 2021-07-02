from tkinter import *

def myFunc():
    print(chk.get())
    if chk.get() ==0:
        print("체크버튼이 해제되었습니다")
    elif chk.get() == 1:
        print("체크버튼이 눌러졌습니다")

window =Tk() #위젯 창을 만들어주는 클래스

#화면을 구성하고 처리하는 코드
window.title("윈도우 창 연습")
window.geometry("200x100")
#window.resizable(width = FALSE , height=FALSE)

#checkbutton
chk = IntVar()
cb1 = Checkbutton(window, text="클릭하세요", variable = chk , command=myFunc)

cb1.pack()

window.mainloop()