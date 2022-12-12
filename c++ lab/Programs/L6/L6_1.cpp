#include <iostream>
#include <string.h>
class Person
{
private:
    char name[30];
    char address[50];
    char city[30];
    char mobile[11];
public:
    Person(char name[]="",char address[],char city[]="",char mobile[]="")
    {
        strcpy(this->name,name);
        strcpy(this->address,address);
        strcpy(this->city,city);
        strcpy(this->mobile,mobile);
    }
    ~Person()
    {
        cout<<"\nDestructor of class Person called here.";
    }
    {

    }
    void getdatda()
    {
        cout<<"\nEnter Name: ";gets(name);
        fflushall();
        cout<<"\nEnter Address: ";gets(address);
        fflushall();
        cout<<"\nEnter City: ";gets(city);
        fflushall();
        cout<<"\nEnter Number: ";gets(number);
        fflushall();
    }
    void showdata()
    {
        cout<<"\nName is:"<<name;
        cout<<"\nAddress is:"<<address;
        cout<<"\nCity is:"<<city;
        cout<<"\nNumber is:"<<number;
    }
};

class Faculty : public Person
{
private:
    char department[40];
    char *subjects[10];
    int nos;
public:
    Faculty(char name[]="",char address[]="",char city[]="",char mobile[]="",char dept[]="") : Person(name,address,city,mobile)
    {
        strcpy(this->department,dept);
    }
    void getdata()
    {
        Person::getdatda();
        cout<<"\nEnter Department: ";
        cin>>department;
        cout<<"\nEnter number of subjects: ";
        cin>>nos;
        for(int i = 0; i < nos; i++)
        {
            cout<<"\nEnter subject number "<<i+1<<" :";
            subjects[i]=new char[30];
            gets(subjects[i]);
            fflush(stdin);
        }
        Person::
    }
};

class Staff : public Person
{
    int typespeed;
    int shortspeed;
};

int main()
{

}