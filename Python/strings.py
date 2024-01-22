# wap to read a string and print it back on the screen after replacing each vowel with an asteric

newstr=""
q=input("Enter a string: ")
for i in range(len(q)):
    if(q[i]=="a" or q[i]=="e" or q[i]=="i" or q[i]=="o" or q[i]=="u"):
        newstr=newstr+"*"
    else:
        newstr=newstr+q[i]
print(newstr)