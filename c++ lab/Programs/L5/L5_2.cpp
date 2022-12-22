#include<iostream>
using namespace std;
class Time{
    int hh,mm,ss;
    public:
        Time(int h=0,int m=0,int s=0){
            this->hh=h;
            this->mm=m;
            this->ss=s;
        }
        Time operator + (Time obj);
        void display();    
};
Time Time::operator+(Time obj){
    Time temp;
    temp.hh = this->hh+obj.hh;
    temp.mm = this->mm+obj.mm;
    temp.ss = this->ss+obj.ss;
    if(temp.ss >=60){
        temp.mm++;
        temp.ss -=60;
    }
if(temp.mm >=60){
        temp.hh++;
        temp.mm -=60;
    }
    if(temp.hh>=24)
       temp.hh -=24;
    return temp;
}
void Time::display(){
    cout<<hh<<"h "<<mm<<" m "<<ss<<" s"<<endl;
}
int main(){
    Time t1(15,40,24), t2(8,30,20);
    Time t3 = t1+t2;
    cout<<"First object:";t1.display();
    cout<<"Second object:";t2.display();
    cout<<"Addition of object:";t3.display();
    return 0;
}
