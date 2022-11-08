#include <iostream>
using namespace std;
class Complex{
    float real;
    float img;
    public:
        Complex(int r=0, int i=0):real(r), img(i){}
        Complex operator + (Complex obj);
        Complex operator - (Complex obj);
        Complex operator * (Complex obj);
        Complex operator / (Complex obj);
        void display();
};
Complex Complex::operator + (Complex obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
    
}
Complex Complex::operator - (Complex obj)
{
    Complex temp;
    temp.real = real - obj.real;
    temp.img = img - obj.img;
    return temp;
}
Complex Complex::operator * (Complex obj)
{
    Complex temp;
    temp.real = real*obj.real-img*obj.img;
    temp.img = real*obj.img + img*obj.real;
    return temp;
}
Complex Complex::operator / (Complex obj)
{
    Complex temp;
    temp.real = (real*obj.real + img*obj.img)/(obj.real*obj.real + obj.img*obj.img);
    temp.img = (img*obj.real - real*obj.img)/(obj.real*obj.real + obj.img*obj.img);
    return temp;
}
void Complex::display()
{
    cout<<real<<" + ("<<img<<"i)"<<endl;
}
int main()
{
    Complex obj1(5,6), obj2(2,3);
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