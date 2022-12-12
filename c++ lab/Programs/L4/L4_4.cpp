#include <iostream>
using namespace std;
class Complex{
    float real;
    float img;
    public:
        Complex(int r=0, int i=0):real(r), img(i){}
        friend Complex operator + (Complex obj, Complex obj2);
        friend Complex operator - (Complex obj, Complex obj2);
        friend Complex operator * (Complex obj, Complex obj2);
        friend Complex operator / (Complex obj, Complex obj2);
        void display();
};
Complex operator + (Complex obj, Complex obj2)
{
    Complex temp;
    temp.real = obj.real + obj2.real;
    temp.img = obj.img + obj2.img;
    return temp;
    
}
Complex operator - (Complex obj, Complex obj2)
{
    Complex temp;
    temp.real = obj.real - obj2.real;
    temp.img = obj.img - obj2.img;
    return temp;
}
Complex operator * (Complex obj, Complex obj2)
{
    Complex temp;
    temp.real = obj.real*obj2.real-obj.img*obj2.img;
    temp.img = obj.real*obj2.img + obj.img*obj2.real;
    return temp;
}
Complex operator / (Complex obj, Complex obj2)
{
    Complex temp;
    temp.real = (obj.real*obj2.real + obj.img*obj2.img)/(obj2.real*obj2.real + obj2.img*obj2.img);
    temp.img = (obj.img*obj2.real - obj.real*obj2.img)/(obj2.real*obj2.real + obj2.img*obj2.img);
    return temp;
}
void Complex::display()
{
    cout<<real<<" + ("<<img<<"i)"<<endl;
}
int main()
{
    Complex obj1(4,5), obj2(1,2);
    cout<<"Object 1: ";
    obj1.display();
    cout<<"Object 2: ";
    obj2.display();
    Complex obj3 =  obj1+obj2;
    obj3.display();
    Complex obj4 =  obj1-obj2;
    obj4.display();
    Complex obj5 =  obj1*obj2;
    obj5.display();
    Complex obj6 =  obj1/obj2;
    obj6.display();

    return 0;
}