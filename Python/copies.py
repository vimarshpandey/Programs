# wap to get a string consisted of 4 copies of the last two characters of a string

str = input("Enter a string: ")
print(4 * (str[-2] + str[-1]))