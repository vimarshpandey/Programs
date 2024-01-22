# wap to create a dict named age to store the ages of any random n MP's in indian lok sabha by reading the data from the user
# then remove the details of the eldest and the youngest MP from dictionary

n = int(input("Enter the number of MPs: \n"))   # taking the number of MP's from the user
age = {}        # creating a dictionary named age
l = []      # list for sorting and removing the elements

for i in range(n):
    l.append(int(input("Enter the age: ")))     # taking the age of all the MPs from the user
l.sort()        # sorting the list
l.remove(l[0])      # removing the youngest MP details from the list
l.remove(l[-1])     # removing the eldest MP details from the list

for i in range(len(l)):     # inserting the details of remaining MP's in the dictionary
    age["MP",i] = l[i]
print("\n After removing the eldest and the youngest MP age from the dictionary: ",age)     # printing the dictionary after removal