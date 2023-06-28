#function to scan name fro user
myname=input("please entre your name")
#function to scan age fro user
myage=input("please entre your age")
#function to scan faculty fro user
myfaculty=input("please entre your faculty")
f1=open("file1.txt","w")    
f1.write(myname+"\n")
f1.write(myage+"\n")
f1.write(myfaculty+"\n")
f1=open("file1.txt","a+")
f1 = open("file1.txt","r")
print(f1.read(10))
print(f1.readline())    
# f1.write(myage)
# f1.write("\n")
# f1=open("file1.txt","a+")
# f1.write(myfaculty)
# f1.write("\n")