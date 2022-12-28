#include<iostream>
using namespace std;
class currency{
    long int rs;
    int $;
    public:
    currency(){
        rs=0;
        $=0;
    }
    void get(){
        cout<<"\n Enter currency in rs: ";
        cin>>rs;
        cout<<"\n Enter a currency in $: ";
        cin>>$;
    }
    void operator+=(currency &t){
        rs+=t.rs;
        $+=t.$;
       cout<<"\n\n The added currency rs: "<<rs<<" "<<"paise";
    }
    void operator-=(currency &t){
        rs-=t.rs;
        $-=t.$;
        cout<<"\n\n The subtracted currency Rs: "<<rs;
    }
    void put(){
        cout<<rs<<" "<<$<<endl;
    }
};
    int main(){
        currency c1,c2;
        c1.get();
        c2.get();
        cout<<"\n\n first currency Rs: ";
        c1.put();
        cout<<"\n\n second currency Rs: ";
        c2.put();
        c1+=c2;
        c1-=c2;
        return 0;
    }
