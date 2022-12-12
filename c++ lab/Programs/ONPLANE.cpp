#include <iostream>
using namespace std;
class Plane{
    protected:
    char model[30];
    char name[30];
    int nop;
    public:
    Plane(){
        getdata();
    }
    void getdata(){
        cout<<"\nEnter model of plane";
        cin>>model;
        
        cout<<"\nEnter name of plane";
        cin>>name;
        
        cout<<"\nEnter no of passengers";
        cin>>nop; 
    }
    void display(){
        cout<<"\nDetails of the plane are: ";
        cout<<"\nModel: "<<model;
        cout<<"\nName: "<<name;
        cout<<"\nNo. of passangers: "<<nop;

        mainmenu();
    }
};

int main(){

    void mainmenu(){
        while(1){
            int ch;
            cout<<"\n"
            switch (ch)
            {
            case 0:
                break;
            case 1:
                
            default:
                break;
            }
        }
    }    
    
    return 0;
}