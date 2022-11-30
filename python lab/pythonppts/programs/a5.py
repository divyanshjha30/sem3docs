lst = []
while(1):
    ele = input("Enter the next element (enter 'stop' to stop): ")
    if(ele == 'stop' or ele == 'STOP'):
        break
    lst.append(ele)
print(lst)
print("Max: ",max(lst))