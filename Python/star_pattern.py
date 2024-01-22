# Program to print full pyramid 
num_rows = int(input("Enter the number of rows"));
for i in range(0, num_rows):
	for j in range(0, num_rows-i-1):
		print(end=" ")
	for j in range(0, i+1):
		print("*", end=" ")
	print()
	


#Program to print Left Half Pyramid
num_rows = int(input("Enter the number of rows"));
k = 1
for i in range(0, num_rows):
    for j in range(0, k):
        print("* ", end="")
    k = k + 1
    print()
	


#Program to print Right Half Pyramid
num_rows = int(input("Enter the number of rows"));
k = 8
for i in range(0, num_rows):
    for j in range(0, k):
        print(end=" ")
    k = k - 2
    for j in range(0, i+1):
        print("* ", end="")
    print()



# Program to print One More Star Pattern Pyramid
print("Program to print star pattern: \n");
rows = input("Enter maximum stars you want display on a single line")
rows = int (rows)
for i in range (0, num_rows):
    for j in range(0, i + 1):
        print("* ", end='')
    print("\r")
for i in range (num_rows, 0, -1):
    for j in range(0, i -1):
        print("* ", end='')
    print("\r")




print("Program to print star pattern in different style: \n");
num_rows = int(input('Please enter the number of rows'));
for i in range (0,num_rows):
    for j in range (num_rows,i,-1):
        print("* ", end="")
    print()



num_rows = int(input("Please enter the number of rows"));
for i in range(num_rows,0,-1):
    for j in range(0, num_rows-i):
        print(end=" ")
    for j in range(0,i):
        print("* ", end=" ")
    print()



num_rows = int(input("Enter the number of rows"))
k = 0
for i in range(1, num_rows + 1): 
    for j in range (1, (num_rows - i) + 1): 
        print(end = " ")
    while k != (2 * i - 1):
        print("*", end = "")
        k = k + 1
    k = 0   
    print()
k = 2
m = 1
for i in range(1, num_rows): 
    for j in range (1, k):
        print(end = " ") 
    k = k + 1
    while m <= (2 * (num_rows - i) - 1): 
        print("*", end = "") 
        m = m + 1
    m = 1	
    print()



