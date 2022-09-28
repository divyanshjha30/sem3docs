#include <iostream>
using namespace std;
class area
{
private:
    float radius;
    float base;
    float height;
public:
    void getdata(){
        cout<<"Enter the radius of circle: ";
        cin>>radius;
        cout<<"Enter the base of the triangle: ";
        cin>>base;
        cout<<"Enter the height of the triangle: ";
        cin>>height;
        
    }
    void calcarea(){
        if(base == 0 || height == 0){
            cout<<"The circle with radius = "<<radius<<", has area = "<<radius*radius*3.14<<"."<<endl;
        }
        if (radius == 0)
        {
            cout<<"The triangle with height = "<<height<<" and base = "<<base<<" has area = "<<(base*height)/2<<"."<<endl;
        }
        
    }
};

int main(){
    area a1,a2;
    a1.getdata();
    a1.calcarea();
    a2.getdata();
    a2.calcarea();
    return 0;
}