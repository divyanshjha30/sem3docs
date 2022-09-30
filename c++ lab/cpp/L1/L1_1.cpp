#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num<2)
    {
        cout<<num<<" is less than 2, enter correct input.";
    } else{
        int flag = 0;
        for(int i=2;i<num;i++){
            if(num%i==0){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<num<<" Is not a prime number";
        } else{
            cout<<num<<" Is a prime number";
        }
    }
    return 0;
}