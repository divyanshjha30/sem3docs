print("Part 1")
months = {"Jan":31, "Feb":28, "Mar":31, "Apr":30, "May":31, "Jun":30,
          "Jul":31, "Aug":31, "Sep":30, "Oct":31, "Nov":30, "Dec":31}
mon = input("Enter a month:")
print(months[mon])

print("Part 2")
sort = sorted(months)
print(sort)

print("Part 3")
for i in months:
	if(months[i] == 31):
		print(i)

print("Part 4")
pairs = list(months.items())
n = len(pairs)    
for i in range(n-1):
    for j in range(n-i-1):
        if pairs[j][1] > pairs[j + 1][1]:
            pairs[j], pairs[j + 1] = pairs[j + 1], pairs[j]
months = dict(pairs)
print(months)
