import math
a = int(input("Enter the number to be squared: "))
b = int(input("Enter the number to be cubed: "))
c = int(input("Enter the number to find square root: "))
d = int(input("Enter the number to find cube root: "))
square = a*a
cube = b*b*b
cuberoot = pow(d,1/3)
squareroot = math.sqrt(c)
print("The square of ",a ,"is = ",square)
print("The cube of ",b ,"is = ",cube)
print("The sqaure root of ",c ,"is = ",squareroot)
print("The cube root of ",d , "is = ",cuberoot)
