x = 10
y = 20

print(x)
print(type(y)) # for printing the type of variables

if x > y:
    print("Hey!")
elif x == y:
    print("Whats's up")
elif x < y:
    print("That's cool")
else:
    print(":)")

for i in range(1, 11):
    print(i * 2,end=" ")