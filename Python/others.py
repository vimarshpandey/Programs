print("Printing Factorial")
num=int(input("Enter the number: "))
fact = 1
for i in range(num,1,-1):
    fact=fact*i

print("Factorial of",num," is ",fact)

print("Determining Prime Number")
n=int(input("Enter the number: "))
flag=False
for i in range(2,n):
    if(n%i==0):
        flag=True
        print("Not prime")
        break
else:
    if(not flag):
        print("Prime")