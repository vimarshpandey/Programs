# d = { key: value }  dictionary
d = { "Brand":"Dell", "Model":"G-15", "Price":"85000"}
print(d.keys(),"\n")
print(d.values(),"\n")
print(d["Brand"],"\n")
a="Price"
count = 0
for i in d.keys():
    if(i==a):
        print(d[i],"\n")
        break
    else:
        count += 1

if(len(d) == count):
    print("Given key does nor exist.")