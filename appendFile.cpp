#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


string getFlname()
{
	string inNm;
	cout << "Enter file name: ";
	cin >> inNm;
	return inNm;

}

int cntLn(string fl)
{
  string ln;
  int cnt;
  ifstream mfl;
  mfl.open(fl.c_str());
  while(!mfl.eof())
  {
     getline(mfl, ln);
     cnt++;
  }
  mfl.close();
  return cnt;
}

int aprNum()
{
  int num;
  cout << "How many lines should the file contain: ";
  cin >> num;
  return num;
}

/*bool chkFl(int n, int n2)
{
  bool chk;
  if(n <= n2)
  {
    return chk = true;
  }
  else
  {
    return chk = false;
  }
}*/

void readFl(string fl)
{
  string ln;
  ifstream mfl;
  mfl.open(fl.c_str());
  while(!mfl.eof())
  {
     getline(mfl, ln);
     cout << ln << endl;
  }
  mfl.close();
}

void apndFl(string fl, int num, int num2)
{
  ofstream mflw;
  mflw.open(fl.c_str(), ofstream::out | ofstream::app);
  
  if(num <= num2)
  {

    cout << "Not enough lines. " << endl;
    cout << "Adding more lines..." << endl;

    mflw << "The file was not long enough.\n";
    mflw << "These lines were added to compensate.";
  }
  else
  { 
    cout << "The file is good."<< endl; 
    cout << "No action needed." << endl;
  }
  mflw.close();
}



int main()
{
   string fl;
   int num;
   int aprN;
   //bool chk;
   
   fl = getFlname();
   aprN = aprNum();
   num = cntLn(fl) - 1;
  // chk = chkFl(num, aprNn);

   readFl(fl);
   cout << "Number of lines in file: " << num << endl;
   apndFl(fl, num, aprN);

  return 0;
}



