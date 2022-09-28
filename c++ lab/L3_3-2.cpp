#include <iostream>
using namespace std;

double area(float r){
    return 3.14*r*r;
}

double area(float b,float h){
    return (b*h)/2;
}

int main(){
    float radius,base,height;
    cout<<"Enter the radius, base and height: ";
    cin>>radius>>base>>height;
    cout<<"The area of circle is: "<<area(radius)<<", and the area of triangle is: "<<area(base,height)<<"."<<endl;
    return 0;
}