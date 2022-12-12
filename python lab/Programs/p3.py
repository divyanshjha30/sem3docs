import math
base = int(input("Enter base length: "))
height = int(input("Enter height length: "))
hypo = int(input("Enter hypotenuse length: "))
if(hypo == math.sqrt(base*base+height*height)):
    print("The triangle is a Right Angled Triangle")
else:
    print("The triangle is not a Right Angled Triangle")
    