num = int(input("Enter the number of students: \n"))

students = {}
stu = []

for i in range(num):
    stu.append(int(input("Enter the number: ")))

for i in range(len(stu)):
    students[i+1] = stu[i]

val = int(input("\nEnter the roll number of student whose marks you want to know: "))
print("\nThe marks of the student whose roll number is",val," is: ",students[val],"\n\n")

students.pop(2)
print(students,"\n\n")

students.popitem()
print(students,"\n\n")

students.update({1: 100})
print(students,"\n\n")

for x in students.keys():
    print(x)
print("\n\n")

for y in students.values():
    print(y,"\n\n")
print("\n\n")

print(students,"\n\n")

students.clear()

print(students)