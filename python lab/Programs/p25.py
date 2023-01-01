f = open("sample.txt")
num_words = 0
for line in f:
    words = line.split()
    num_words += len(words)
print("Number of words:")
print(num_words)
f.close()



