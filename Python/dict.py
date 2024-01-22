# wap to concatinate the given dictionary into new dictionary
d1 = {1:11, 2:22, 3:33}
d2 = {4:44, 5:55, 6:66}
d3 = {7:77, 8:88, 9:99}

new = d1

for key in d2:
    new[key] = d2[key]

for key in d3:
    new[key] = d3[key]

print(d1,"\n\n")



# wap to create and print a dictionary were keys are the numbers from 1 to n and values are squares of keys
num = int(input("Enter the number of keys: "))
d={}
for i in range (num):
    d[i+1]=(i+1)**2
print(d,"\n\n")




# wap to create a tuple of all values present in a dictionary and find their average
d1 = {"a":10, "b":20, "c":30, "d":40, "e":50}
sum=0
count=0
list=[]
for key in d1:
    count=count+1
    list.append(d1[key])
    sum=sum+d1[key]
tup=tuple(list)
print(tup)
print(sum/count,"\n\n")


# wap to replace dictionary values with their average
l = [{"Roll. No.": 101, "Course": "Python", "CA1": 65, "CA2": 82, "CA3": 95},
     {"Roll. No.": 102, "Course": "Python", "CA1": 72, "CA2": 58, "CA3": 88},
     {"Roll. No.": 103, "Course": "Python", "CA1": 85, "CA2": 79, "CA3": 90}]

# avg1 = round((l[0]["CA1"] + l[0]["CA2"] + l[0]["CA3"])/3,2)
# avg2 = round((l[1]["CA1"] + l[1]["CA2"] + l[1]["CA3"])/3,2)
# avg3 = round((l[2]["CA1"] + l[2]["CA2"] + l[2]["CA3"])/3,2)

# for i in range(0,len(l)):
#     l[i].pop("CA1")
#     l[i].pop("CA2")
#     l[i].pop("CA3")

# l[0]["Average"]=avg1
# l[1]["Average"]=avg2
# l[2]["Average"]=avg3

# print(l)

for i in range (len(l)):
    avg = round((l[i]["CA1"] + l[i]["CA2"] + l[i]["CA3"])/len(l),2)
    d[i]={"Roll. No.": l[i]["Roll. No."], "Course": "Python", "Average": avg}
    print(d[i])


# given an unsorted element which may or maynot be integer find the frequency of each distinct element using a dictionary

# initializing the list
random_list = ['A', 'A', 'B', 'C', 'B', 'D', 'D', 'A', 'B']
frequency = {}

# iterating over the list
for item in random_list:
   # checking the element in dictionary
   if item in frequency:
      # incrementing the counr
      frequency[item] += 1
   else:
      # initializing the count
      frequency[item] = 1

# printing the frequency
print(frequency)