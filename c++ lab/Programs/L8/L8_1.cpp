#include <iostream>
using namespace std;
template<class X>
void swap1(X &a,X &b) {
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main() {
    int a=6,b=7;
    char x='a',y='b';
    cout<<"Before swap"<<endl;
    cout<<"A : "<<a<<" B : "<<b<<endl;
    cout<<"X : "<<x<<" Y : "<<y<<endl;
    swap1(a,b);
    cout<<"after swap"<<endl;
    cout<<"A : "<<a<<" B : "<<b<<endl;
    swap1(x,y);
    cout<<"X : "<<x<<" Y : "<<y<<endl;
}
