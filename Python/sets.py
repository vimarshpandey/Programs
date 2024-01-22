set1 = set([10,20,30,40])
set2 = set([20,30,40,50])
set3 = set([30,40,50,60])

set3 = set1.intersection(set2)
newset = set3.intersection(set3)

print(newset)

if(set1.isdisjoint(set2) == False):
    print("Common is there")
    print("The common elements are: ",set1.intersection(set2))
else:
    print("Nothing is common")

n1=int(input("Enter the size of first list: "))
x1=[]
for i in range (n1):
    print(i+1,end=". ")
    x1.append(input("Enter the value: "))
print(x1,"\n\n")

n2=int(input("Enter the size of second list: "))
x2=[]
for i in range (n2):
    print(i+1,end=". ")
    x2.append(input("Enter the value: "))
print(x2,"\n\n")

s1 = set(x1)
s2 = set(x2)

d = s1.intersection(s2)
print(d)

dup = s1.difference(d)
print(dup)