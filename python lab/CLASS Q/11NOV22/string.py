def swap():
    x = input('Enter value of x: ')
    y = input('Enter value of y: ')
    temp = x
    x = y
    y = temp
    print('The value of x after swapping: {}'.format(x))
    print('The value of y after swapping: {}'.format(y))

def concat(x,y):
    return x+y

def vowel(string, vowels):
    final = [each for each in string if each in vowels]
    print(len(final))