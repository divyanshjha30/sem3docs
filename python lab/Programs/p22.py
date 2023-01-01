print("Part 1")
f = open("sample.txt")
print("Current pointer position is: ",f.tell())
print("Part 2")
f.seek(4)
print("Current pointer position is: ",f.tell())
print("Part 3")
print(f.read(5))
print("Part 4")
f.seek(f.tell()+10)
print("Part 5")
print("Current pointer position is: ",f.tell())
print("Part 6")
print(f.read(10))




