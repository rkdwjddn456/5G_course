from tkinter import *

window =Tk() #위젯 창을 만들어주는 클래스

#화면을 구성하고 처리하는 코드
window.title("윈도우 창 연습")
#window.geometry("400x100")
#window.resizable(width = FALSE , height=FALSE)

#label
label1 = Label(window, text = "HELLO")
label2 = Label(window, text = "열심히", font =("궁서체", 30),fg ='blue')
label3 = Label(window, text="공부중입니다", bg = 'magenta',width = 20,height = 5,anchor=SE)

label1.pack() #라벨을 화면에 표시
label2.pack() #라벨을 화면에 표시
label3.pack() #라벨을 화면에 표시

window.mainloop() #창을 실행, 나가기 버튼을 누르기전에는 무한루프
