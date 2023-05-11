var_1 = int (input("enter first number "))
var_2 = int (input("enter second number "))
#printing   & 
print( "& operator  "+str (var_1&var_2) )
#printing   or bitwise operator 
print("or operator "+str (var_1|var_2))
#printing 	NOR  bitwise operator 
print("nor operator " +str(var_1^var_2))
#printing 	not bitwise operator 
print(" not operator var_1 "+ str(~var_1)+"not operator var_2 " +str(~var_2))
#printing shiftting right 
print("shifting left "+str (var_1<<2) + "shifting right  "+str(var_2>>2))

#print + operator  and - operator 
print(	" + operator "+ str(var_1+var_2)+"- operator   "+str(var_2-var_1) +"* operator  "+ str(var_2*var_1) +" / operator "+str(var_2/var_1))
#print relation operators 
print(str(var_1<var_2)+" "+str(var_1>var_2)+" "+ str(var_1==var_2)+" "+str(var_1 != var_2)+" "+ str(var_1<=var_2) )



