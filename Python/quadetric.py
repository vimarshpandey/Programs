#quardetric roots can be equal real or imaginary (d=b**2-4ac) if it greater than 0 then real if it is equal to 0 then equal and less tham 0 then imaginary
a=int(input("Enter the value of 'a': "))
b=int(input("Enter the value of 'b': "))
c=int(input("Enter the value of 'c': "))
D=(b**2)-(4*a*c)
if(D>0):
    R1=(-b+(D)**1/2)/2*a
    R2=(-b-(D)**1/2)/2*a
    print("Roots are Real and the roots are",R1,"and",R2)
elif(D==0):
    R=(-b)/2*a
    print("Roots are Equal and the roots are",R)
else:
    print("Roots are Imaginary")