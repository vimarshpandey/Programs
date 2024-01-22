# f= open("E://f.txt","rb")   # use w+ in place of r+

# print(f.read())

# f.write("ABC")
# f.seek(0)

# print(f.read())

# f.close()

# in r+ curser is at the beginning and if file does not exist it will show error and append the data 
# in w+ cursor is at the end of the file and if file will not exist it will create the file then do the operation and it will override the data

file = open("E://file.txt","a+")
friends = ["kiran\n", "yogesh\n"]
file.write("\nHello, this is my first write.\n")
file.write("Hello, kiran\n")
file.writelines(friends)
print(file.name)
print(file.mode)
print(file.readable())
print(file.closed)
file.seek(0)
print(file.read())
file.close()