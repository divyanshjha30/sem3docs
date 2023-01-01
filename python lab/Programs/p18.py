lst = [int(x) for x in input("Enter integers separated by commas:").split()]
print("Original list is: ",lst)
lst[0], lst[len(lst)-1] = lst[len(lst)-1], lst[0]
print("List after swaping values: ",lst)
