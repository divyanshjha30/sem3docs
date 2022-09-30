#include <iostream.h>
#include <conio.h>
void main(){
clrscr();
int num, a=0, b=1, fib = 0;
cout<<"Enter any number: ";
cin>>num;
cout<<"The fibonacci sequence upto "<<num<<" terms is: ";
for(int i=1; i<=num; i++){
cout<<fib<<", ";
a=b;
b=fib;
fib=a+b;
}
getch();
}
