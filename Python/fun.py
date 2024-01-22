# map, lambda, functions, filter, reduce

x = lambda a : a + 10
print(x(5))


def addition(n):
    return n + n
# We double all numbers using map()
numbers = (1, 2, 3, 4)
result = map(addition, numbers)
print(list(result))


ages = [5, 12, 17, 18, 24, 32]
def myFunc(x):
  if x < 18:
    return False
  else:
    return True
adults = filter(myFunc, ages)
for x in adults:
  print(x)


import functools 
# initializing list 
lis = [1, 3, 5, 6, 2] 
a = lambda a, b: a+b
# using reduce to compute sum of list 
print("The sum of the list elements is : ", end="") 
print(functools.reduce(a, lis))