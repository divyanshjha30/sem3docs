def gen(name,gender):
    if(gender=='M' or gender =='m'):	
        print('Mr. ',name)
    elif(gender=='F' or gender =='f'):
        print('Ms. ',name)
name = input("Enter name:")
gender = input("Enter gender:")
gen(name,gender)
