import sys
from PyQt5.QtWidgets import QPushButton, QLabel
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout
from PyQt5.QtGui import QPixmap
from PyQt5.QtCore import Qt

imgPath = '/Users/user/Desktop/pp/data/lena.jpg'

class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.pixmap = QPixmap(imgPath) #

        self.lbl_img = QLabel()
        self.lbl_img.setPixmap(self.pixmap)
        lbl_size = QLabel('Width: ' + str(self.pixmap.width()) + ', Height: ' + str(self.pixmap.height()))
        lbl_size.setAlignment(Qt.AlignCenter)

        btn2 = QPushButton('&Pic2', self)
        btn2.setCheckable(True)
        btn2.toggle()

        btn1 = QPushButton(self)
        btn1.setText('Pic1')

        vbox = QVBoxLayout()
        vbox.addWidget(self.lbl_img)
        vbox.addWidget(lbl_size)
        vbox.addWidget(btn1)
        vbox.addWidget(btn2)

        btn2.clicked.connect(self.changePicture)
        btn1.clicked.connect(self.changePicture1)

        self.setLayout(vbox)
        self.setWindowTitle('QPushButton')
        self.setGeometry(300, 300, 300, 200)
        self.show()

    def changePicture(self):
        imgPath = '/Users/user/Desktop/pp/data/apple.jpg'
        self.pixmap = QPixmap(imgPath)
        self.lbl_img.setPixmap(self.pixmap)
        print('clicked2')

    def changePicture1(self):
        imgPath = '/Users/user/Desktop/pp/data/lena.jpg'
        self.pixmap = QPixmap(imgPath)
        self.lbl_img.setPixmap(self.pixmap)
        print('clicked1')
if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())