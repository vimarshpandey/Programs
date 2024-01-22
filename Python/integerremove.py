# wap to remove all the characters other than integers from a given string

newstr = ""
str = input("Enter a string with digits in it: ")
for i in range(len(str)):
    if(str[i].isdigit()):
        newstr = newstr + str[i]
    
print(newstr)