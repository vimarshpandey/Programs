a='''Vimarsh
Pandey'''     # "vimarsh" is a string constant.
print(a)
print(type(a))
print(len(a))

#wap to determine weather a given string is palindrome or not

x=input("Enter a string: ")
y=x[::-1]
if(x==y):
    print("Palindrome")
else:
    print("Not Palindrome")