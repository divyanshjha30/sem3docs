#include <iostream>
#include <cstring>
using namespace std;
class student{
    char name[50];
    char course[50];
    long long int phone;
    public:
    void getdata(){
        cout<<"Enter the name, course and phone number: "<<endl;
        cin>>name>>course>>phone;
    }
    void display(){
        cout<<"The details of student:"<<endl<<"Name: "<<name<<endl<<"Course: "<<course<<endl<<"Phone number: "<<phone<<endl;    
    }
};
int main(){
    student s1;
    s1.getdata();
    s1.display();
}