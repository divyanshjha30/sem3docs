#include <iostream>
using namespace std;
	//Divide By Zero Error
int main()
{
		int num1, num2, div;
	cout<<"Enter First number:";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	try
	{
		if (num2==0)
			throw num2;
		else
		div=num1/num2;
		cout<<"Division of"<<num1<<"by"<<num2<<"is: "<<div;
	}
	catch(int n)
	{
		cout<<"Divide By Zero Error";
	}
	cout<<"\nProgram End";
	
	return 0;
}
