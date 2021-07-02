from tkinter import *

window =Tk() #위젯 창을 만들어주는 클래스

#화면을 구성하고 처리하는 코드
window.title("윈도우 창 연습")
window.geometry("200x100")
#window.resizable(width = FALSE , height=FALSE)


button1 = Button(window, text = "버튼1")
button2 = Button(window, text = "버튼2")
button3 = Button(window, text = "버튼3")
button4 = Button(window, text = "버튼4")

# button1.pack(side = TOP,fill=X, padx=10,pady=10)
# button2.pack(side = TOP,fill=X, padx=10,pady=10)
# button3.pack(side = TOP,fill=X, padx=10,pady=10)
# button4.pack(side = TOP,fill=X, padx=10,pady=10)

button1.place(x=50, y=20, width=300, height =50)
button2.place(x=10, y=80, width=140, height =50)
button3.place(x=10, y=80, width=140, height =50)
button4.place(x=10, y=140, width=300, height =50)


window.mainloop()