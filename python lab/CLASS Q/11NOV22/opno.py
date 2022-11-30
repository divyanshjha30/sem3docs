def reverse(num):
    reversed_num = 0
    while num != 0:
        digit = num % 10
        reversed_num = reversed_num * 10 + digit
        num //= 10
    return reversed_num

def getSum(n):
    sum = 0
    while (n != 0):
        sum = sum + (n % 10)
        n = n//10
    return sum

def arm(n):
    s = n
    b = len(str(n))
    sum1 = 0
    while n != 0:
        r = n % 10
        sum1 = sum1+(r**b)
        n = n//10
    if s == sum1:
        return 1
    else:
        return 0

def isPalindrome(s):
    return str(s) == str(s[::-1])
