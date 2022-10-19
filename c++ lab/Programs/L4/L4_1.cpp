#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
    public:
    Distance()
    {
        
    }
    Distance(int f,int i)
    { 
        feet=f;
        inches=i;
    }
    Distance operator + (Distance);
    Distance operator - (Distance);
    int operator > (Distance);
    void operator += (Distance);
    void operator -= (Distance);
    void display();
};

Distance Distance::operator+(Distance o)
{
    Distance t;
    t.feet=feet+o.feet;
    t.inches=inches+o.inches;
    if(t.inches>=12)
    {t.feet++;
    t.inches-=12;
    }
    return t;
    }

Distance Distance::operator-(Distance o)
{
    Distance t;
    t.feet=feet-o.feet;
    t.inches=inches-o.inches;
    if(t.feet<0)
    {
        t.feet--;
        t.inches+=12;
    }
    return t;
}
    int Distance::operator>(Distance o)
    {
        if (feet > o.feet)
            return 1;
        else if(feet<o.feet)
        return 0;
        else if (inches>o.inches)
        return 1;
        else
        return 0;
    }                         
    void Distance::operator+=(Distance o)
{
    feet+=o.feet;
    inches+=o.inches;
    if(inches>=12)
    {
        feet++;
        inches-=12;
    }
}
   void Distance::operator-=(Distance o)
{
    feet-=o.feet;
    inches-=o.inches;
    if(feet<0)
    {
        feet--;
        inches+=12;
    }
}
void Distance::display()
{
    cout<<"\n"<<"feet :"<<feet<<"  inches  :"<<inches;
}
int main() 
{ 
    int a;
    Distance  o1(17,8),o2(8,11);
 
    cout<<"\n first object ";
    o1.display();
    cout<<"\n second object ";
    o2.display();
    cout<<"\n addition object ";
    Distance o3=o1+o2;
    o3.display();
  
    Distance o4=o1-o2;
    cout<<"\n subtraction object ";
    o4.display();
    o1+=o2;
    cout<<"\n ASSIGNMENT ADDITION object ";
    o1.display();
    o1-=o2;
    cout<<"\n ASSIGNMENT SUBTRACTION object ";
    o1.display();
    cout<<"\n**************";
    a=(o1>o2);
    if (a==0)
    o1.display();
    else 
    o2.display();
 } 