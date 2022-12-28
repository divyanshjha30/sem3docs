#include <iostream>
#include <string.h>
using namespace std;
class Customer{
    int act_number;
    char name[50];
    float balance;
    public:
        Customer(int ac=0,char *na="\0",float bal=0){
            act_number=ac;
            strcpy(name,na);
            balance=bal;
        }
        void withdraw();
        void deposit();
        void show() {
            cout<<"Name: "<<name<<"\n"<<"Acc Number: "
            <<act_number<<"\n"<<"Balance: "<<balance<<endl;
        }
};
void Customer::withdraw(){
    int money;
    try {
        if(balance<0)
            throw balance;
        else{
            fflush(stdin);
            cout<<"Enter ammount to withrow : ";
            cin>>money;
            fflush(stdin);
            balance-=money;
            if(balance<0)
                throw balance;
            else
                cout<<"Money withdraw"<<endl;
        }
    }
    catch(float c) {
        cout<<"Balance can't be negative\nBalance : "<<c<<endl;
    }
    }
void Customer::deposit(){
    int amm;
    try {
        if(balance<0)   
            throw balance;
        else{
            cout<<"Enter amount : ";
            cin>>amm;
            balance+=amm;
            cout<<"Total Balance : "<<balance;
        }
    }
    catch(float c) {
        cout<<"Balance can't be negative\nBalance : "<<c<<endl;
    }
}
int main() {
    int ch,ba;
    long double ac;
    char na[20];
    Customer c2(69,"Divyansh Jha",6900.0);
    do{
        cout<<"1. for new Customer\n2. for existing Customer\n
        3. to exit.\nChose option : ";
        cin>>ch;
        if(ch==1) {
            cout<<"\nEnter name : ";
            fflush(stdin);
            gets(na);
            fflush(stdin);
            cout<<"\nEnter Account Number : ";
            cin>>ac;
            fflush(stdin);
            cout<<"\nDeposited balance : ";
            cin>>ba;
            fflush(stdin);
            Customer c1(ac,na,ba);
            cout<<"Account Created!"<<endl;
        }
    if(ch==2){
        int ch1;
        cout<<"1. for Deposit\n2. for Withdraw\n3. to view balance.\n
        4. for exit\nEnter Choice : ";
        cin>>ch1;
        switch(ch1) {
            case 1:{
                c2.deposit();
                break;
            }
            case 2:{
                c2.withdraw();
                break;
            }
            case 3:{
                c2.show();
                break;
            }
            case 4:
                exit (0);
        }
    }
    }while(ch!=3);
}

