#include<iostream>
#include<string.h>
using namespace std;
class person
{
	char name[40];
	char address[50];
	char city[40];
	char mobile[11];

	public:
	person(char name[]="", char address[]="",
    char city[]="", char mobile[]="" )

	{
		strcpy(this->name,name);
		strcpy(this->address,address);
		strcpy(this->city,city);
		strcpy(this->mobile,mobile);
	}
	void getdata()
	{
		cout<<"\nEnter Name :";
		gets(name);
		fflush(stdin);
		cout<<"\nEnter Address :";
		gets(address);
		fflush(stdin);
		cout<<"\nEnter City :";
		gets(city);
		fflush(stdin);
		cout<<"\nEnter Mobile :";
		gets(mobile);
		fflush(stdin);
	}
	void showdata()
	{
		cout<<"\nName : "<<name;
		cout<<"\nAddress : "<<address;
		cout<<"\nCity : "<<city;
		cout<<"\nMobile : "<<mobile;
	}
};

class Faculty:public person
{
	char department[40];
	char *subjects[10];
	int nos;

	public:
	Faculty(char name[]="", char address[]="",
    char city[]="", char mobile[]="",
    char department[]=""):person(name,address,
	city,mobile)

	{
		strcpy(this->department,department);
	}

	void getdata()
	{
		person::getdata();
		cout<<"\nEnter department: ";
		cin>>department;
		cout<<"\nEnter number of subjects: ";
		cin>>nos;
		for(int i=0;i<nos;i++)
		{
			cout<<"\nEnter subject number "<<i+1<<" :";
			subjects[i]=new char[30];
			fflush(stdin);
			gets (subjects[i]);
		}
	}
	void getsub()
	{
		cout<<"\nEnter number of subjects: ";
		cin>>nos;
		for(int i=0;i<nos;i++)
		{
			cout<<"\nEnter subject number "<<i+1<<" :";
			subjects[i]=new char[30];
			gets (subjects[i]);
			fflush(stdin);
		}
	}
	void showdata()
	{
		person::showdata();
		cout<<"\nDepartment is: "<<department;
		cout<<"\nNumber of subjects is: "<<nos;

		for(int i=0;i<nos;i++)
		cout<<"\nSubject "<<i+1<<" :"<<subjects[i];
	}
};

class staff:public person
{
	int typing_speed;
	int shorthand_speed;

	public:
	staff(char name[]="", char address[]="",
    char city[]="", char mobile[]="",
    int typing_speed=0,int shorthand_speed=0)
	:person(name,address,city,mobile)

	{
		this->typing_speed=typing_speed;
		this->shorthand_speed=shorthand_speed;
	}

	void getdata()
	{
		person::getdata();
		cout<<"\nEnter typing speed: ";
		cin>>typing_speed;
		cout<<"\nEnter shorthand speed: ";
		cin>>shorthand_speed;
	}

	void showdata()
	{
		person::showdata();
		cout<<"\nTyping speed is: "<<typing_speed;
		cout<<"\nShorthand speed is: "<<shorthand_speed;
	}
};

int main()
{
	Faculty o;
	o.getdata();
	o.showdata();
	staff o2;
	o2.getdata();
	o2.showdata();
    return 0;
}
