#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string ln;
   ifstream mfl ("exp.txt");
   ofstream mflW ("exp.txt");
   int numln = 0;
   
   if (mfl.is_open())
   {

     while(!mfl.eof())
     {
          getline(mfl,ln);
          numln++;
     }
     cout << numln;

     if(numln <= 2)
     {
       cout << "Not enough lines. " << endl;
       cout << "Adding more lines..." << endl;

       mflW << "This was added because there wasn't enough lines." << endl ;
       mflW << "It should be good now." << endl;
     }
       
     else cout << "Good!" << endl;


     while( getline (mfl, ln))
     {
        cout << ln << '\n';

     }

     mfl.close();

   }
   
   else cout << "Unable to open file";



   return 0;
}
