#include <iostream>
using namespace std;
int main(){
    int num,rem,n=0;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Number before swapping = "<<num<<endl;
    while (num>0){
        rem = num%10;
        n = n*10 + rem;
        num = num/10;
    }
    cout<<"The number after swapping: "<<n;
}