#include<iostream>
using namespace std;
class Number
{
    int n;
    public:
        Number(int num=0):n(num){}
        void operator ++();
        void operator ++(int);
        void operator --();
        void operator --(int);
        void display();
};
void Number::operator++(){
    n++;
}
void Number::operator++(int){
    ++n;
}
void Number::operator--(){
    n--;
}
void Number::operator--(int){
    --n;
}
void Number::display()
{
    cout<<n<<endl;
}
int main(){
    Number o1(3);
    cout<<"Object value:";
    o1.display();
    cout<<"Post ++ operator overload:";o1++;
    o1.display();
    cout<<"Pre ++ operator overload:";++o1;
    o1.display();
    cout<<"Post -- operator overload:";o1--;
    o1.display();
    cout<<"Pre -- operator overload:";--o1;
    o1.display();
    return 0;
}


