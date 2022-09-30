#include <iostream>
using namespace std;
int main(){
    int num,rem,n=0;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0){
        rem = num%10;
        n = n + rem;
        num = num/10;
    }
    cout<<"The sum of digits: "<<n;
}