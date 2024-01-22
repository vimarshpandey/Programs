# num = int(input("Enter age: "))
# if num < 18:
#     raise Exception("No number bekow 18")
# else:
#     print(num)

a = int(input("Enter age: "))
try:
    if a < 18:
        b = a/0
    else:
        print(b)

except ZeroDivisionError:
    print("Zero Division")

except NameError:
    print("Name Error")