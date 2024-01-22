# Inbuilt Functions

str = "hi how RY. and Your friend"

str1 = str.capitalize()
print(str1)

str2 = str.center(30,"@")
print(str2)

str3 = str.count("h")
print(str3)

str4 = str.find("how",1,10)
print(str4)

str5 = str.find("how",10,20)
print(str5)

str6 = str.index("how",1,10)
print(str6)

# str7 = str.index("how",10,20)
# print(str7)

x = 5
y = 10
z = 15
print('x={0},y={1} and z={2}'.format(z,y,x))

a = 10
b = 20
c = 30
d = ('a=%d, b=%d, c=%d'%(b,c,a))
print(d)

print("Length: ",len(str))

str7 = str.title()
print(str7)

str8 = str.replace("how","@@")
print(str8)


# Boolean

s = "Hello9"
s1 = s.isalnum()
print(s1)

s2 = "Hello 99"       # false because of space
s3 = s2.isalnum()
print(s3)

s4 = "123456789"
s5 = s4.isnumeric()
print(s5)

s6 = "Hello789"
s7 = s6.isnumeric()
print(s7)

s8 = "1"
s9 = s8.isdigit()
print(s9)

s10 = "11"
s11 = s10.isdigit()
print("s11",s11)

s12 = "34df"
s13 = s12.isidentifier()
print(s13)

s13 = "_df"
s14 = s13.isidentifier()
print(s14)

s15 = "34Df"
s16 = s15.islower()
print("s16",s16)

s17 = "34DFASD"
s18 = s17.isupper()
print(s18)

s19 = "  "
s20 = s19.isspace()
print(s20)

s21 = "Hello World"
s22 = s21.istitle()
print(s22)

# String Function

# j, k, l = input("Enter three values: ").split(".")
# print(j, k, l)

s23 = "Hello \nWorld"
s24 = s23.splitlines()
print(s24)

s25 = "123"
s26 = s25.zfill(5)
print(s26)

s27 = "     Hello     "
s28 = s27.lstrip()
print(s28)

s29 = s27.rstrip()
print(s29)

s30 = s27.strip()
print(s30)

s31 = s27.startswith("  ")
print("s31",s31)

s32 = s27.startswith("Hel",5)
print(s32)

s33 = s27.swapcase()
print(s33)

s34 = "123456789"
s35 = "*"
s36 = s35.join(s34[0:10:2])
print(s36)

s37 = "HeLlO"
s38 = s37.lower()
s39 = s37.upper()
print(s38)
print(s39)

s40 = "Hello"
s41 = s40.ljust(10,"*")
s42 = s40.rjust(10,"*")
s43 = s40.center(10,"*")
print(s41)
print(s42)
print(s43)

s44 = s40[2:4]
print(s44)

s45 = s40[-2:]
print(s45)

s46 = "hi how"
print(s46.rfind("h"))