#include <iostream>
using namespace std;
int main(){
    int num, a=0, b=1, fib = 0;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"The fibonacci sequence upto "<<num<<" terms is: ";
    for(int i=1; i<=num; i++){
        cout<<fib;
        if(i!=num){
            cout<<", ";
        }
        a=b;
        b=fib;
        fib=a+b;
    }
    return 0;
}