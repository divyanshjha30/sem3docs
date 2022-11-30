#include <iostream>
using namespace std;

class Shape
{
    protected: float dim;
    public:
        Shape(float dim)
        {
            this->dim = dim;
        }
        virtual float calc_area()=0;
        virtual float calc_peri()=0;
        virtual void show(char *pname)
        {
            cout<<"\n"<<pname<<" is: "<<dim;
        }
};

class Square : public Shape
{
    public:
        Square(float dim):Shape(dim)
        {}
        float calc_area()
        {
            return dim*dim;
        }
        float calc_peri()
        {
            return 4*dim;
        }
        void show(char *p)
        {
            Shape::show("Side of Square is: ");
        }
};

class Circle : public Shape
{
    public:
        Circle(float dim):Shape(dim)
        {}
        float calc_area()
        {
            return 3.14*dim*dim;
        }
        float calc_peri()
        {
            return 2*3.14*dim;
        }
        void show(char *p)
        {
            Shape::show("Radius of Circle is: ");
        }
};

int main()
{
    Shape *ptr[10];
    int n,c,ch;
    double dim;
    cout<<"\nEnter number of shapes to be created: ";
    cin>>n;
    for(c = 0; c < n; c++)
    {
        cout<<"\nEnter Dimension: ";
        cin>>dim;
        cout<<"\nChoice for shape\n1. For Circle\n2. For Square\nEnter choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            ptr[c]=new Circle(dim);
            break;
        case 2:
            ptr[c]=new Square(dim);
            break;
        default:
            cout<<"\nWrong choice";
            break;
        }
    }
    for(c = 0; c < n; c++)
    {
        ptr[c]->show("");
        cout<<"\nArea is: "<<ptr[c]->calc_area();
        cout<<"\nPerimeter is: "<<ptr[c]->calc_peri();
    }
    return 0;
}