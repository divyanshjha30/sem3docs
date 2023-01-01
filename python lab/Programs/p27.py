f = open("sample.txt")
lines = f.readlines()
string = []
for line in lines:
    for word in line.split():
        if word not in string:
            string.append(word)
lst = " ".join(sorted(string))
print(lst)
f.close()


