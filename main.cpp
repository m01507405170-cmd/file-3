
#include <iostream>
#include <fstream>
using namespace std;

int main()
{


   ofstream file ("welcome.txt");
   if(!file.is_open())

       cout<<"error "<<endl;

   else
        cout<<" open ya basa "<<endl;

   file<<"Hello Everybody";
  // cout<<file.tellp()endl;

   file.close();


   fstream pp("welcome.txt" , ios::in  | ios::out);


string x;
    getline(pp, x);

    int pos = x.find("body");
    x.replace(pos, 4, "one");

    pp.close();

    ofstream out("welcome.txt");
    out<< x;
    out.close();
   }
























