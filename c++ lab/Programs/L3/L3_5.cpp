#include <iostream>
using namespace std;
class Example{
private:
    int *a;
    int *b;
public:
    Example(int);
    Example(int,int);
    void display();
    ~Example();
};
Example::Example(int n){
    a = new int;
    *a = n;
    b = new int;
    *b = 0;
}
Example::Example(int n,int m){
    a = new int;
    *a = n;
    b = new int;
    *b = m;
}
void Example::display(){
    cout<<"A = "<<*a<<endl<<"B = "<<*b<<endl;
}
Example::~Example(){
    delete a;
    delete b;
    cout<<"Destructor called here"<<endl;
}
int main(){
    Example e1(5),e2(4,10);
    e1.display();
    e2.display();
}