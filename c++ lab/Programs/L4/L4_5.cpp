#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;
    public:
        Distance(int f=0, int i =0):feet(f),inches(i){}
        operator int();
        void display();
};
void Distance::display()
{
    cout<<feet<<"ft "<<inches<<"in"<<endl;
}
Distance::operator int()
{
    return feet*12 + inches;
}
int main()
{
    while(1)
    {
        int ch = 0,f,i;
        cout<<"\nEnter 0 to exit: ";
        cin>>ch;
        if(ch==0)
        break;
        cout<<"Enter feet: ";
        cin>>f;
        cout<<"Enter inches: ";
        cin>>i;
        Distance obj(f,i);
        int num = (int)obj;
        obj.display();
        cout<<num<<" Inches\n";
    }

    return 0;
}