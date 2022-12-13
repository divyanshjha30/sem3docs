def maxi(t):
    max = t[0]
    for i in range (len(t)):
        if t[i] > max:
            max = t[i]
    print (max)

def mini(t):
    min = t[0]
    for i in range (len(t)):
        if t[i] < min:
            min = t[i]
    print (min)

tup = (112,734,542,432,444)
lst = [333,235,547,468,296]
print("for tuple: ",tup)
print("max: ",end = "")
maxi(tup)
print("min: ",end = "")
mini(tup)
print("for list: ",lst)
print("max: ",end = "")
maxi(lst)
print("min: ",end = "")
mini(lst)