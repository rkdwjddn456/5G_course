import sys 
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLineEdit, QLabel
from PyQt5.QtWidgets import QHBoxLayout, QVBoxLayout

class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        btnCalc = QPushButton('계산')
        cancelButton = QPushButton('Cancel')

        self.edit1 = QLineEdit('5')
        lblPlus = QLabel('+')
        self.edit2 = QLineEdit('8')
        lblEqual = QLabel('=')
        self.editResult = QLineEdit('결과')

        btnCalc.clicked.connect(self.plusCalc)
    #UI1 - 북쪽
        hbox1 = QHBoxLayout()
        hbox1.addStretch(1)
        hbox1.addWidget(self.edit1)
        hbox1.addWidget(lblPlus)
        hbox1.addWidget(self.edit2)
        hbox1.addWidget((lblEqual))
        hbox1.addWidget(self.editResult)
        hbox1.addStretch(1)
    #UI2 - 남쪽
        hbox2 = QHBoxLayout()
        hbox2.addStretch(1)
        hbox2.addWidget(btnCalc)
        hbox2.addWidget(cancelButton)
        hbox2.addStretch(1)

        vbox = QVBoxLayout()
        vbox.addStretch(2)
        vbox.addLayout(hbox1)
        vbox.addLayout(hbox2)
        vbox.addStretch(1)

        self.setLayout(vbox)

        self.setWindowTitle('Box Layout')
        self.setGeometry(300, 300, 600, 150)
        self.show()

    def plusCalc(self):
        result = int(self.edit1.text()) + int(self.edit2.text())
        #result = 7  #정수, 문자열 변환을 조심하세요~!
        self.editResult.setText(str(result))
        #print(int(self.edit1.text()))

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())