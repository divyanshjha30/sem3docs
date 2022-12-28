#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
class student
{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData(); // get student data from user
   void displayData(); // display data
};
void student :: getData() {
    char nm[30];
    cout<< "Enter name: ";
    gets(nm);
    strcpy(name,nm);
   fflush(stdin);
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore(); 
   fflush(stdin);
   cout << "\nEnter Marks :: ";
   cin >> marks;
   fflush(stdin);
}
void student :: displayData() {
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nMarks :: " << marks << endl;
}
int main(){
   student s[3]; // array of 3 student objects
   fstream file;
   int i;
   file.open("student.txt", ios :: out); // open file for writing
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter 3 students Details to the File :- " << endl;
   for (i = 0; i < 3; i++){
      s[i].getData();
      file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();
   file.open("student.txt", ios :: in); // open file for reading
   cout << "\nReading Student information to the file :- " << endl;

   for (i = 0; i < 3; i++)
    {
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }
   file.close(); 
   return 0;
}
