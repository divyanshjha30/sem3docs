#include <iostream>
using namespace std;
	//Divide By Zero Error
int main()
{
		float num1, num2, div;
	cout<<"Enter First number:";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	try
	{
		if(num2!=num1)
		{
				div=num1/num2;
		if (div< 1)
			throw 'e';
			cout<<"Division of"<<num1<<"by"<<num2<<"is: "<<div;
		}
		else
		{
			throw num2;
		}
	}
	catch(int n)
	{
		cout<<"Divide By Zero Error";
	}
	
	catch(char st)
	{
		cout<<"Division output Less than One Error";
	}
	
	catch(...)
	{
		cout<<"Unknown Exception";
	}
	cout<<"\nProgram End";
	
	return 0;
}
