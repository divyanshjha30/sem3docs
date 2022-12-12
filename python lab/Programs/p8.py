str = input("Enter a string sentence: ")
str = str.lower()
lst = list(str.split(' '))
i = 0
while 1:
    count = 0
    j = 0
    for i in range(0,len(lst)):
        if(lst[j] == lst[i]):
            count+=1
    print(lst[j]," is repeated ",count," times.")
    lst = [i for i in lst if i != lst[j]]
    if(i==len(lst)):
        break
    j+=1