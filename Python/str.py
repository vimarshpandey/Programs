# wap that reads a srting from user and produces a string by exchanging the first and last character of the given string
s = input("Enter a string: ")
# l=len(s) - 1
# fc=s[0]
# lc=s[l]

# s = s[1:l]

# s = lc + s + fc
# print(s)

fc=s[0]
lc=s[-1]
s = s[1:-1] # s[1:len(s)-1]

print(lc+s+fc)