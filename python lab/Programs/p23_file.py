import pickle
print("******************** Divyansh-077 *****************")
data = []
with open("stud_data.dat","wb") as file:
    resp = 'y'
    while(resp in 'Yy'):
        name = input("Enter student data:-\nname:")
        name = name.encode()
        roll = input("Enter roll number:")
        roll = roll.encode()
        marks = input("Enter marks:")
        marks = marks.encode()
        data.append([name,roll,marks])
        resp = input("Want to enter more data(Yes-Y/No-N):")
    pickle.dump(data,file)