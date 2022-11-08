#include <iostream>
using namespace std;
int main(){
    int num, factorial;
    cout<<"Enter the number: ";
    cin>>num;
    factorial = num;
    for(int i = num-1; i > 0; i--){
        factorial = factorial*i;
    }
    cout<<"The factorial of "<<num<<" is = "<<factorial;
    return 0;
}