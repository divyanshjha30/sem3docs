def prime(lower,upper):
 for number in range (lower, upper + 1):  
    if number > 1:  
        for i in range (2, number):  
            if (number % i) == 0:  
                break  
        else:  
            print (number)

lower = int(input ("Please, Enter the Lowest Range Value: "))  
upper = int(input ("Please, Enter the Upper Range Value: "))  
  
print ("The Prime Numbers in the range are: ")
prime(lower,upper)