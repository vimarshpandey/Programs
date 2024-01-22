# wap to remove the duplicate element of the list

n=int(input("Enter the size of list: "))
x1=[]
for i in range (n):
    print(i+1,end=". ")
    x1.append(input("Enter the value: "))
    print("List Status:",x1,"\n")
print(x1,"\n\n")

c=[]
for i in range (n):
    for j in range (n):
        if(x1[i]==x1[j] and x1[i] not in c):
            c.append(x1[i])
            
print("After removal of duplicate elements",c)
