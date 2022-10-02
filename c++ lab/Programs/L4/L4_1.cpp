#include <iostrean>
using namespace std;
class Distance{
private:
    int meters;
public:
    Distance(int);
    ~Distance();
};
Distance::Distance(int){

}
Distance::~Distance(){
    cout<<"Destructor called here";
}
int main (){
    int n;
    cout<<"Enter the distance in meters: ";
    cin>>n;
    Distance d1(n);
}