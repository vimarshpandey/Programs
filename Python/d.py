# create a dict of following 5 fruits where fruit name is the key and its price is its crossponding value,
# assume you have 5 item of each fruit then determine how much money you will earn if you sell all the fruits.

fruit = {"manngo": 7, "apple": 8, "guava": 6, "orange": 5.5, "pear": 4.5, }
price = 0
sum = 0

for key in fruit:
    price=fruit[key]
    price=price*5
    sum = sum + price

print(sum)

# wap to display the top 3 heavy priced items in a shop

item = {"i1": 400, "i2": 200, "i3": 300, "i4": 500, "i5": 600}
l = []

for i in item:
    l.append(item[i])
l.sort()
print(l[-1],l[-2],l[-3])