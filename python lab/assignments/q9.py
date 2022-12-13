sub1 = float(input("Marks for first sub: "))
sub2 = float(input("Marks for second sub: "))
sub3 = float(input("Marks for third sub: "))
sub4 = float(input("Marks for fourth sub: "))
sub5 = float(input("Marks for fifth sub: "))
avg = (sub1+sub2+sub3+sub4+sub5)/5
if (avg >= 90):
    print("Excellent")
if (avg >= 70 and avg < 90):
    print("Distinction")
if (avg >= 70 and avg < 70):
    print("First division")
if (avg >= 40 and avg < 60):
    print("Pass")
if (avg < 40):
    print("Fail")
