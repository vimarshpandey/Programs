name = {"Anjali","Kiran","Yogesh","Roshan","Vimarsh","Neeraj","ABC"}
print(name)

for item in name:
    print(item)

name.add("Anand")
print(name)

name.remove("ABC")
print(name)

name.discard("DEF")
print(name)

roll = {10,11,12,13,14,15,16,"Kiran"}
both1 = name.union(roll)
print(both1)

both2 = name.intersection(roll)
print(both2)

both3 = name.difference(roll)
print(both3)

both4 = name.symmetric_difference(roll)
print(both4)

name.clear()
print(name)


cls = {"X","XI","XII"}
both5 = roll.intersection_update(cls)
print(both5)

both6 = cls.isdisjoint(name)
print(both6)

both7 = roll.issubset(name)
print(both7)

a = {1,2,3,4,5}
b = {1,2,3}
both8 = b.issuperset(a)
print(both8)

num = {10,20,30,40,50,60,70,80,90,100}
max = max(num)
min = min(num)
print("Max is: ",max,"\nMin is: ",min)