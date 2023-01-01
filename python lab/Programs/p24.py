import csv
List = [["user1", "password1"],
        ["user2", "password2"],
        ["user3", "password3"],
        ["user4", "password4"],
        ["user5", "password5"]]
f1=open("UserInformation.csv", "w", newline="\n")
writer=csv.writer(f1)
writer.writerows(List)
f1.close()
f2=open("UserInformation.csv", "r")
rows=csv.reader(f2)
userId = input("Enter the user-id: ")
flag = True
for record in rows:
    if record[0]==userId:
        print("The password is: ", record[1])
        flag = False
        break
if flag:
    print("User-id not found")


