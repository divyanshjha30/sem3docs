#include <iostream>
#include <fstream> 
using namespace std; 
int main()
{
   char ch;
   fstream file; 
   file.open("sample.txt",ios::out);
    
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }    
   cout<<"File created successfully."<<endl;
   
   file<<"hello my name is Divyansh Jha. how are you. i am a bca student and i am very pleased to meet you.";
  
   file.close();

   file.open("sample.txt",ios::in);
    
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }     
   cout<<"File content: ";
   while(!file.eof())
   {
       file>>noskipws>>ch; 
       cout<<ch;
   }
    
   file.close(); 
    
   return 0;
}
