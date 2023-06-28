from PyQt5.QtWidgets  import *
from  PyQt5.QtGui import QFont 
def main():
    app = QApplication([])
    window = QWidget()
    lable = QLabel(window)
    window.setGeometry(100,100,200,300)
   #  lable.setText("dont press that button ")
    window.setWindowTitle("My First Gui ")
    layout = QVBoxLayout()
    lable = QLable("dnt press it ")
    button  = QPushButton("PressMe")
    layout =  
    lable.move(50,100)
    window.show()
    app.exec_()




if __name__ == '__main__' :
    main()