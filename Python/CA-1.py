# wap to find the sum of squares of middle 3 digits of a 5 digit positive number entered by user.
# if the count of digits in the entered number is not 5 then find the product of all the digits.

pro = 1
digit = input("Enter the number: ")            # taking the input from the user
len = len(digit)
if(len == 5):                                  # checking the length of the number is 5 or not
    d1 = int(digit[1])**2                      # squaring the middle 3 digits of a 5 digit number with the help of indexing and storing it in the variables
    d2 = int(digit[2])**2
    d3 = int(digit[3])**2
    sum = d1 + d2 + d3                         # adding the square
    print("Sum of the square of middle 3 digits of the entered 5 digit number is: ",sum)        # printing the sum
elif(len != 5 and int(digit)>0):               # checking the length of the number is 5 or not
    for i in range(len):
        pro = pro * int(digit[i])              # multiplying all the digits of the number
    print("The product of all the digits is: ",pro)                                             # printing the product
else:
    print("Please enter a positive number")    # printing message if the number is negative