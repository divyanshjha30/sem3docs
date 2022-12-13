def prime():
 for number in range (2, 11):  
    if number > 1:  
        for i in range (2, number):  
            if (number % i) == 0:  
                break  
        else:  
            print (number," is prime")
            print("table:")
         
            table(number)
            print(" ")
def table(p):
    for i in range(1,11):
     print(p,"X",i,"=",p*i)
  
print ("The Prime Numbers in the range are: ")
prime()