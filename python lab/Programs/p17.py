lst = [(1,2,4),(6,5,3),(7,8,9)]
print("Original list: ",lst)

n = len(lst)
for i in range(n):
    #lst[i] = list(lst[i])
    for j in range(n-i-1):
        if(lst[j][len(lst[i])-1]>lst[j+1][len(lst[i+1])-1]):
            lst[i+1],lst[i] = lst[i],lst[i+1]

print("List after sorting",lst)
