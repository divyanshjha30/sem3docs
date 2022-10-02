#include <iostream>
using namespace std;
class calc{
    float radius,base,height;
    public:
    calc(){
        cout<<endl<<"Enter the radius of circle: ";
        cin>>radius;
        cout<<"Enter base of triangle: ";
        cin>>base;
        cout<<"Enter height of triangle: ";
        cin>>height;
    }
    double area(float r){
        return 3.14*r*r;
    }

    double area(float b,float h){
        return (b*h)/2;
    }
    void display(){
        cout<<"The area of circle is: "<<area(radius)<<", and the area of triangle is: "<<area(base,height)<<"."<<endl<<endl;
    }
};
int main(){
    calc c1;
    c1.display();
    return 0;
}