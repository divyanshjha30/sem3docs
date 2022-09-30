#include <iostream>
using namespace std;
class circle
{
private:
    float radius;
public:
    circle();
    circle(float);
    void getdata(){
        cout<<"Enter the radius: ";
        cin>>radius;
    }
    void display(){
        cout<<"The circle with radius = "<<radius<<", has area = "<<radius*radius*3.14<<"."<<endl;
    }
};

circle::circle()
{
    radius = 0;
}

circle::circle(float a)
{
    radius = a;
}

int main(){
    circle c1,c2(6.9);
    c1.getdata();
    c1.display();
    c2.display();
    return 0;
}