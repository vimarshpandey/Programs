x = 3
print(type(x))

set1 = {1,2,3,4,5}
set2 = {4,5,6,7,8}

print(set1.difference(set2))
print(set1.symmetric_difference(set2))

set1.update(set2)
print(set1)