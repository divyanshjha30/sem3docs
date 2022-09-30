#include <iostream>
using namespace std;
int maxx(int array[],int num){
int m = array[0];
for(int i = 1; i<num; i++){
    if (array[i]>m){
        m = array[i];
    }
}
return m;
}
int main(){
int num;
cout<<"Enter number of elements: ";
cin>>num;
int numbers[num];
cout<<"Enter the numbers one by one:\n";
for(int i=0; i<num;i++){
cin>>numbers[i];
}
int m;
m = maxx(numbers,num);
cout<<"The max number is: "<<m;
return 0;
}