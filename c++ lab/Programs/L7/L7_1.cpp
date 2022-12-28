#include <iostream>
using namespace std;
#define SIZE 6
class Stack{
        int n[SIZE];
        int top = -1;
        public:
        void push (int);
        void pop ();
        void peek ();
        void display ();
    };
class Empty{};
class Full{};
void Stack::push (int item ) {
    if (top >= SIZE - 1)
        {
        throw Full();
        }
    else
        {
        top++;
        n[top] = item;
        cout << "\n" << item 
        << " inserted at " << top + 1;
        }
    }
void Stack::pop () {
    int v;
    if (top == -1){
        throw Empty();
        }
    else {
        v = n[top];
        top -= 1;
        cout << "\nDeleted item is " << v;
        }
    }
void Stack::peek () {
    if (top == -1){
        throw Empty();
        }
    else
        cout << "\nTop Element is " << n[top];
    }
void Stack::display () {
    if (top == -10) {
        throw Empty();
        }
    else {
        cout << "\nStack elements are : ";
        int m = 0;
        while (m <= top) {
            cout << n[m] << " ";
            m += 1;
            }
        }
    }
int main () {
        Stack s;
        int ch;
        do {
            try{
                cout<<"\nEnter choice for stack operation";
                cout<<"\n1. Push";
                cout<<"\n2. Pop";
                cout<<"\n3. Peek";
                cout<<"\n4. Display";
                cout<<"\n5. Exit";
                cout<<"\nEnter choice : ";
                cin>>ch;
                switch(ch){
                        case 1:
                            int k;
                            cout<<"\nEnter Key : ";
                            cin>>k;
                            s.push(k);
                            break;
                        case 2:
                            s.pop();
                            break;
                        case 3:
                            s.peek();
                            break;
                        case 4:
                            s.display();
                            break;
                        case 5:
                            cout<<"\nBye for Now";
                            break;
                        default:
                            cout<<"\nWrong choice";
                            break;
                    }   
            }
            catch(Full a){
                    cout<<"OverFlow Condition!!";
                }
            catch(Empty b){
                    cout<<"Underflow Condition!!";
                }
        } while(ch!=5);
    }
