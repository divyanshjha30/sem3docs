num = int(input("Enter a number: "))
summ = 0
n1 = num
while num != 0:
    rem = num%10
    summ = summ + rem ** 3
    num = num//10
if(n1 == summ):
    print(n1,"is an Armstrong number.")
else:
    print(n1,"is not an Armstrong number.")
