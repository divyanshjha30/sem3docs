f = open("sample.txt")
num_lines = 0
for t in f.readlines():
    num_lines += 1
print("Number of lines in the file is:")
print(num_lines)
f.close()


