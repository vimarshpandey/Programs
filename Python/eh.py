# try:
#     str = "hello"
#     val = str.index("e")
    
# except:
#     print("Not in string")

# else:
#     print(val)

# finally:
#     print("Done")

# a = 10
# b = "H"
# try:
#     c = a/b
# except ZeroDivisionError:
#     print("ZDE")
# except TypeError:
#     print("TE")

# try:
#     x = -1
#     if x < 0:
#         raise Exception("No number below zero")
# except:
#     raise

a = 10
b = 5
c = 10
d = 0
try:
    e = c/d
    print("Outer try")
    try:
        c = a/b
    except:
        print("Inner except")
    finally:
        print("inner finally")
except:
    print("Outer except")
finally:
    print("Outer finally")