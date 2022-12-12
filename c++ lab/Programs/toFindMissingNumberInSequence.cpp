#include <iostream>
using namespace std;
int main()
    {
        int max_seq=0;
        int count=0;
        int sum=0;
        int final_sum=0;
        int n,arr[20];
        cout<<"Enter Number of elements : ";
        cin>>n;
        cout<<"\nEnter elementes in array : ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Entered elements are : ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        for(int i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                    {
                        count++;
                        sum=sum+arr[i];
                    }
                else
                {
                    if(max_seq<count)
                        {  
                            max_seq=count;
                            final_sum=sum;
                            count=0;
                            sum=0;
                        }
                }
            }
        cout<<"\nMax_Seq : "<<max_seq;
        cout<<"\nSum : "<<final_sum;
    }