#include <iostream.h>
#include <conio.h>
void main(){
clrscr();
int num, factorial;
cout<<"Enter the number: ";
cin>>num;
factorial = num;
for(int i = num-1; i > 0; i--){
factorial = factorial*i;
}
cout<<"The factorial of "<<num<<" is = "<<factorial;
getch();
}