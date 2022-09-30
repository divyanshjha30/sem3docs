#include <iostream>
#include <cstring>
using namespace std;

class student{
    char name[50];
    char course[50];
    int phone;
    public:
    student();
    void getdata(){
        cout<<"Enter the name, course and phone number: "<<endl;
        cin>>name>>course>>phone;
    }
    void display(){
        cout<<"The details of students:"<<endl<<"Name: "<<name<<endl<<"Course: "<<course<<endl<<"Phone number: "<<phone<<endl;    
    }
};
student::student(){
    strcpy(name,"xyz");
    strcpy(course,"abc");
    phone = 100;
}

int main(){
    char name[50] = "djboi";
    student s1;
    s1.getdata();
    s1.display();
}