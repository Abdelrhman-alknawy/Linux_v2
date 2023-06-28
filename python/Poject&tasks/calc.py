from tkinter import *

# Create a function to evaluate the expression
def evaluate(event):
    result.configure(text = "Result: " + str(eval(entry.get())))

# Create the main window
root = Tk()

# Set the title and size of the window
root.title("Calculator")
root.geometry("300x200")

# Create a label to display the result
result = Label(root, text = "Result: ")
result.pack()

# Create an entry widget for the expression
entry = Entry(root)
entry.bind("<Return>", evaluate)
entry.pack()

# Create a button for evaluating the expression
button = Button(root, text = "Evaluate", command = lambda: result.configure(text = "Result: " + str(eval(entry.get()))))
button.pack()

# Run the main loop
root.mainloop() 