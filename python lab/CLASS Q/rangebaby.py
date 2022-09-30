start = int(input("Enter first number: "))
end = int(input("Enter second number: "))
for i in range (start,end+1):
    print ("The table of ",i," is:")
    for j in range (1,11):
        print(i,'*',j,'=',j*i)
