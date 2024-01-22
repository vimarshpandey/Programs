# wap to find the commom elements from two given list

n=int(input("Enter the size of first list: "))
x1=[]
for i in range (n):
    print(i+1,end=". ")
    x1.append(input("Enter the value: "))
    print("List Status:",x1,"\n")
print(x1,"\n\n")

n=int(input("Enter the size of second list: "))
x2=[]
for i in range (n):
    print(i+1,end=". ")
    x2.append(input("Enter the value: "))
    print("List Status:",x2,"\n")
print(x2,"\n\n")



c = []

for i in x1:
    if i in x2:
        c.append(i)
print("Common elements: ",c)