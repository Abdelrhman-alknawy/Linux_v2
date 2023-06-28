from tkinter import *
def func():
    print("gwaily")

def ButtonPressTracker():
    ButtonPressTracker.counter +=1
    print("The button pressed" , ButtonPressTracker.counter)
ButtonPressTracker.counter =0


window_1=Tk()
window_1.title("welcome Tkinter")
window_1.geometry('500x500')
#b1  =Button(window_1 , text = "TOP")
#b2  =Button(window_1 , text = "gwialy")
b3  =Button(window_1 , text = "LEFT")
b4  =Button(window_1 , text = "RIGT")
#b1.pack(side = TOP)
b1  =Button(window_1 , text = "Close " , bd = '20' , command = window_1.destroy)
b1.pack(side = TOP)
B_2  =Button(window_1 , text = "print my name" , bd = '5' , command = func)
B_2.pack(side = BOTTOM)
#b2.pack(side=BOTTOM)
b3.pack(side=LEFT)
b4.pack(side=RIGHT)
Label(window_1 , text = "PHOTO " , font = ('Verdana', 30)).pack(side=TOP)

# Adding a photo image object to use image
photo_1 = PhotoImage(file='image.png')

# editing of the image resizing of it
# resizing decreased by increasing the number
photo_1 = photo_1.subsample(2,2)


B_1  =Button(window_1 , text = "Increment The button " , bd = '5' ,image=photo_1, command = ButtonPressTracker)
B_1.place(x=100,y=250)
##B_1.pack(side = BOTTOM)
##B_1.place(x=500,y=250)
#Label_1 =Label(window_1,text='hello')
#Label_1.pack(side=TOP)

window_1.mainloop()