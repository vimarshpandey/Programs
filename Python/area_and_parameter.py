# write a program to calculate the area of rectangle
import constants as const
import math
x=int(input("Enter the length of the rectangle: "))
y=int(input("Enter the width of the rectangle: "))
area=x*y
parameter=2*(x+y)
print("The area and parameter of the rectangle is ", area ," and ", parameter ,".\n\n")


# write a program to calculate the area of circle
z=int(input("Enter the radius of the circle: "))
areac=const.PI*z**2
parameterc=2*const.PI*z
a=round(parameterc,2)
print("The area and parameter of the circle is ", areac ," and ", a ,".\n\n")


# program to demosnstrate the use of math module
a=int(input("Enter a number: "))
print("The square root of the number is: ",round(math.sqrt(a),2))