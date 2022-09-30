lr = 2 #int(input("Enter the lower range"))
ur = 10 #int(input("Enter the upper range"))
s = 0
flag = 0
for i in range (lr,ur+1):
    flag = 0
    if(i>1):
        for j in range (2,i):
            if(i%j==0):
                flag += 1
        if(flag == 0):
            print(i)
            s += i
            """else:
                print(i)
                s+=i
                break"""
print(s)
