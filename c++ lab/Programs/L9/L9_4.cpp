#include<iostream>
#include<fstream>
using namespace std;
int main(){
   fstream fp;
   char buf[100];
   int pos;
   fp.open("test.txt", ios :: out | ios :: ate);
   cout << "\nWriting to a file ... " << endl;
   fp << "This is a line" << endl; 
   fp << "This is a another line" << endl; 
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   fp.seekp(-10, ios :: cur);
   fp << endl << "Writing at a random location  ";
   fp.seekp(7, ios :: beg);
   fp << " Hello World  ";
   fp.close(); // file write complete
   cout << "Writing Complete ... " << endl;
   fp.open("test.txt", ios :: in | ios :: ate);
   cout << "\nReading from the file ... " << endl;
   fp.seekg(0); 
   while (!fp.eof()) {
      fp.getline(buf, 100);
      cout << buf << endl;
   }
   pos = fp.tellg();
   cout << "\nCurrent Position of get pointer : " << pos << endl;
   return 0;
}
