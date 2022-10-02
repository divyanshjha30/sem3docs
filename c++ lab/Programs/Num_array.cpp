#include <iostream>
using namespace std;
class Num_array{
        int *a;
        int size;
        public:
            Num_array(int);
            void input();
            int max();
            int min();
            float avg();
            ~Num_array();
    };
Num_array::Num_array(int n)
    {
        a = new int(n);
        size = n;
    }
void Num_array::input()
    {
        cout<<"Enter the elements : \n";
        for(int i=0;i<size;i++)
            {
                cin>>*(a+i);
            }
    }
int Num_array::max()
    {
        int max=*a;
        for(int i=0;i<size;i++)
            {
                if(*(a+i)>max)
                    max=*(a+i);
            }
        return max;
    }
int Num_array::min()
    {
        int min=*a;
        for(int i=0;i<size;i++)
            {
                if(*(a+i)<min)
                    min=*(a+i);
            }
        return min;
    }
float Num_array::avg()
    {
        float sum=0;
        for(int i=0;i<size;i++)
            sum=sum+*(a+i);
        return (sum/size);
    }
Num_array::~Num_array(){
                    delete a;
                    cout<<"\nDestructor called here";
                }
int main()
    {
        int n;
        cout<<"Enter the size : ";
        cin>>n;
        Num_array o(n);
        o.input();
        cout<<"\nMax of elements is : "<<o.max();
        cout<<"\nMin of elements is : "<<o.min();
        cout<<"\nAverage of elements is: "<<o.avg();
    }
