# wap to count all lowercase, uppercase, digits, white space and special characters in a given string
upper=0
lower=0
digit=0
space=0
special=0
s = input("Enter a string: ")
for i in range (len(s)):
    if(s[i].isupper()):
        upper=upper+1
    elif(s[i].islower()):
        lower=lower+1
    elif(s[i].isdigit()):
        digit=digit+1
    elif(s[i].isspace()):
        space=space+1
    else:
        special=special+1
print("Upper case: ",upper,"\nLower case: ",lower,"\nDigit: ",digit,"\nWhite space: ",space,"\nSpecial symbol: ",special)