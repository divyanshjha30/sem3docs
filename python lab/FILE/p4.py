str1 = input("Enter your first string: ")
str2 = input("Enter your second string: ")

print("String 1 before swapping: ",str1)
print("String 2 before swapping: ",str2)

str1 = str1+str2
str2 = str1[0 : (len(str1) - len(str2))]
str1 = str1[len(str2) : ]

print("String 1 after swapping: ",str1)
print("String 2 after swapping: ",str2)
