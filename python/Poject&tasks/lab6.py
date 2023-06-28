
while True:
        print("1.isdecimal()"+"\n2.rpartition()"+"\n3.rfind()"+"\npressanykey to exit")
        op  = input("To understand a function please enter your choice ")
        if op == '1':
                txt = "I could eat bananas all day, bananas are my favorite fruit"
                x = txt.rpartition("bananas")
                print(x)
                print(" The rpartition() method searches for the last occurrence of a specified string"+"and splits the string into a tuple containing three elements   . ")
        elif op == '2' :
                txt = "1234"
                x = txt.isdecimal()
                print(x)
                print("The isdecimal() method returns True if all the characters are decimals (0-9).")
        elif op =='3' :
                txt = "Mi casa, su casa."
                x = txt.rfind("casa")
                print(x)
                print("The rfind() method finds the last occurrence of the specified value.")   
        else :
               print("bye bye ")
               break