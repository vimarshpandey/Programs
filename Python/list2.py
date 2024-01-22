l1 = ["Good","Lucky"]
l2 = ["Morning","Afternoon","Evening"]
l3 = [l1[0]+l2[0],l1[0]+l2[1],l1[0]+l2[2],l1[1]+l2[0],l1[1]+l2[1],l1[1]+l2[2]]
print(l3)

# wap to create a text tuple by reading a line of text from user
# then generate a length tuple of the same size where each int value
# represents the length of the crossponding word




# write a program to create a list L of n color-names and aslo create a tuple T
# of m color-names that a user doesn't like. Do ensure the tuple T is the subset
# of list L. Then delete all color-names for the list L which the user has no
# preference. Then print the remaining color-names m reverse. name-wise and list
# wise.

l = ["red", "green", "blue", "yellow", "orange", "pink"]

t = []
n = int(input(("Enter the number of colors in tuple: ")))
for i in range (n):
    c = input("Enter the color name: ")
    t.append(c)
t = tuple(t)
print(t)

for i in range (len(t)):
    a = t[i] in l
    if(a==True):
        l.remove(t[i])
l.reverse()
print(l)
l.sort()
print(l)