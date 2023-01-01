def concate(str1,str2):
    return str1+str2
def check_same(str1,str2):
    return str1==str2
def check_len(str1,str2):
    return len(str1)==len(str2)
str1 = input("Enter 1st string:")
str2 = input("Enter 2nd string:")
ch = 1
while(ch!=0):
    print("Enter the choice of Operation:")
    print("1->Concate")
    print("2->Check Similarity")
    print("3->Check length equality")
    print("0->Exit")
    ch = int(input())
    if(ch==1):
        print(concate(str1,str2))
    elif(ch==2):
        print("Strings are same:",check_same(str1,str2))
    elif(ch==3):
        print("Strigs have equal length:",check_len(str1,str2))
    elif(ch==0):
        exit()
