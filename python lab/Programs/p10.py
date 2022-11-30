def concat():
    str1 = input("Enter the first string: ")
    str2 = input("Enter the second string: ")
    print(str1+str2)

def split():
    str1 = input(Enter the string: )
    print(str1.splitlines)

while(1):
    print("Welcome to fun with strings!")
    print("0. Exit\n1. Concatenate\n2. Split\n3. Capitalise\n4. Lower\n5. Palindrome")
    ch = input("Enter your choice: ")
    if(ch==0):
        exit
    elif(ch==1):
        concat()
    elif(ch==2):
        split()
    elif(ch==3):
        cap()
    elif(ch==4):
        low()
    elif(ch==5):
        palin()