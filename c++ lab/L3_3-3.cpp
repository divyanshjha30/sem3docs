#include <iostream>
using namespace std;
class calc
{
    float radius,base,height;
    public:
    calc(){
        cout<<"Enter the radius, base and height: ";
        cin>>radius>>base>>height;
    }
    double area(float r){
        return 3.14*r*r;
    }

    double area(float b,float h){
        return (b*h)/2;
    }
    void display(){
        cout<<"The area of circle is: "<<area(radius)<<", and the area of triangle is: "<<area(base,height)<<"."<<endl;
    }
};
int main(){
    calc c1;
    c1.display();
    return 0;
}