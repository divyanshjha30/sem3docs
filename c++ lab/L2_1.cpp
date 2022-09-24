#include <iostream> 
using namespace std; 
struct student
{
    int Roll_No;
    char Name[40];
    char Course[50]; 
    void get_data(){
        cout<<"Enter Roll no, Name and course:\n"; cin>>Roll_No>>Name>>Course;
    }
    void display()
    {  
        cout<<"\n**********************"; 
        cout<<"\n STUDENT DETAILS";
        cout<<"\n Roll no:"<<Roll_No;
        cout<<"\n Name:"<<Name;
        cout<<"\n Course:"<<Course; 
        cout<<"\n**********************";
    }
}; 
int main() { 
    student S1;
    S1.get_data();
    S1.display(); 
    return 0;
}