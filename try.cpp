#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   string ln;
   string inln;
   ifstream mfl ("exp.txt");
   ofstream mflw ("exp.txt");
   int numln = 0;
   vector <string> lnAr;
   
   if (mfl.is_open())
   {

     while( getline(mfl, ln) );
     {
          
          cout << ln << endl;
          inln = ln;
          lnAr.push_back(inln);
          numln++;

     }
     
     
     cout << numln +1 << endl;
     
     /*for (int j=0; j<lnAr.size(); j++)
     {
           cout << lnAr[j] << endl;
     }*/
     
     mfl.close();
    }
    else cout << "Unable to open file";


    if(mflw.is_open())
    { 
      if(numln <= 2)
      {
        cout << "Not enough lines. " << endl;
        cout << "Adding more lines..." << endl;

        lnAr.push_back("This was added because there wasn't enough lines.");
        lnAr.push_back("It should be good now.");
        
        for (int i=0; i<lnAr.size(); i++)
        {
           mflw << lnAr[i] << endl;
        
        
        }
        
       }
       mflw.close();
     } 
     else cout << "Unable to open file";  
    


     /*while( getline (mfl, ln))
     {
        cout << ln << '\n';

     }*/

   
   
   



   return 0;
}
