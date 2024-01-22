for i in range (1,10):
    print("*",end=" ")
for i in range (1,5):
    print("*                 *")
for i in range (1,11):
    print("*",end=" ")      #first rectangle code end

print("\n\n")

s="* "                  #second rectangle code start
print(s*10)
for i in range (3):
    print(s,end="")
    print(" "*16,end="")
    print(s)
print(s*10)

print("\n\n")

n=int(input("Enter the number of lines: "))                #third program for triangle pattern
for i in range (n+1):
    print("* "*i)

print("\n\n")


def triangle(n):
    k = n - 1
    for i in range(0, n):
        for j in range(0, k):
            print(end=" ")
        k = k - 1
        for j in range(0, i+1):
            print("* ", end="")
        print("\r")
    k = 0
    
    for i in range(n, 0, -1):
        for j in range(0, k):
            print(end=" ")
        k = k + 1
        for j in range(0, i):
            print("* ", end="")
        print("\r")

n=int(input("Enter the number of lines: "))
triangle(n)