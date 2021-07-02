from tkinter import *

window = Tk()        # 위젯 창을 만드는 클래스

window.title("윈도우 창 연습")
window.geometry("400x500")
# window.resizable(width = FALSE, height = FALSE)

# Label
label_1 = Label(window, text = "Python", font=("궁서체", 20), fg="red")
label_2 = Label(window, text = "열심히", font=("맑은 고딕", 13), width=25, height=3, anchor=W)
label_3 = Label(window, text = "공부 중입니다.", bg="#624f31", width=20, height=5, anchor=SE)

label_1.pack()
label_2.pack()
label_3.pack()

window.mainloop()    # 창을 호출




