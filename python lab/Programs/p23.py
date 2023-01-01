import pickle
print("Part 1")
with open("stud_data.dat","rb") as file:
    search = input("Enter roll no. to search:")
    search = search.encode()
    s = pickle.load(file)
    for i in s:
        if search == i[1]:
            new_mark = input("Enter new marks:")
            i[2] = new_mark
    print("Marks Updated")
    print(s)
with open("stud_data.dat","wb") as file:
    pickle.dump(s,file)

print("Part 2")
with open("stud_data.dat","rb") as file:
    search = input("Enter roll no. to search:")
    search = search.encode()
    s = pickle.load(file)
    for i in range(len(s)):
        if search == s[i][1]:
            del s[i]
            break
    print("Record Deleted.")
    print(s)
with open("stud_data.dat","wb") as file:
    pickle.dump(s,file)

print("Part 3")
with open("stud_data.dat","rb") as file:
    search = input("Enter roll no. to search:")
    search = search.encode()
    s = pickle.load(file)
    found = False
    for i in s:
        if search == i[1]:
            print(i)
            found = True
    if(found == False):
        print("Record not found!!")

print("Part 4")
file = open("stud_data.dat","rb")
s = pickle.load(file)
file.close()
with open("stud_data.dat","wb") as file:
    resp = 'y'
    while(resp in 'Yy'):
        name = input("Enter data to append:-\nname:")
        name = name.encode()
        roll = input("Enter roll number:")
        roll = roll.encode()
        marks = input("Enter marks:")
        marks = marks.encode()
        s.append([name,roll,marks])
        resp = input("Want to append more data(Yes-Y/No-N):")
    pickle.dump(s,file)

print("Part 5")
with open("stud_data.dat","rb") as file:
    search = input("Enter roll no. to search:")
    search = search.encode()
    s = pickle.load(file)
    found = False
    for i in s:
        if search == i[1]:
            found = True
    if(found == True):
        print("Record found.")
    else:
        print("Record not found.")



