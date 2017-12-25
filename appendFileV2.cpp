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

bool chkFl(int n, int n2)
{
  bool chk;
  if(n2 <= n)
  {
    return chk = true;
  }
  else
  {
    return chk = false;
  }
}

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

void autoApndFl(string fl, int num, int num2)
{
  ofstream mflw;
  mflw.open(fl.c_str(), ofstream::out | ofstream::app);

  cout << "Not enough lines. " << endl;
  cout << "The file wiil be automatically appended." << endl;
  cout << "Adding more lines..." << endl;

  
  while(num < num2)
  {
    mflw << "The file was not long enough.\n";
    num++;
  }
  
  if(num2 = num)
  {
    mflw << "These lines were added to compensate.";
  }
  else
  {
  }
  mflw.close();
  cout << "The file has been automatically appended." << endl;
  
}

void manApndFl(string fl, int num, int num2)
{
  string ln;
  int num3 = num2 - num;
  ofstream mflw;
  mflw.open(fl.c_str(), ofstream::out | ofstream::app);
  
  cout << "The file was not long enogh." << endl;
  cout << "You choose to manually append the file." << endl;
  cout << "Enter what you want to append your file with:" << endl;
  cin >> ln;

  while(num < num2)
  {
    mflw << ln << "\n";
    num++;
  }
  
  if(num2 = num)
  {
    mflw << "The last " << num3 << " lines was added to compensate for short file.";
  }
  else
  {
  }
  mflw.close();
  cout << "The file has been manually appended." << endl;

}

int main()
{
   string fl;
   int num;
   int aprN;
   bool chk;
   char choice;
   char y = 'y';
   char n = 'n';
   
   fl = getFlname();
   aprN = aprNum();
   num = cntLn(fl) - 1;
   chk = chkFl(num, aprN);

   readFl(fl);
   cout << "Number of lines in file: " << num << endl;
   
   if(!chk)
   {
     cout << "The file does not meet the line requirement." << endl;
     cout << "Do you want to manually edit the file. Y/N:  ";
     cin >> choice;
   }
   else
   {
     cout << "The file meets the line requirements";
   }

  
   if(!chk && (choice == y))
   {
     manApndFl(fl, num, aprN);
   }
   else if(!chk && (choice == n))
   {
     autoApndFl(fl, num, aprN);
   }
   else if(chk)
   {
     cout << "Done" << endl;
   }
  return 0; 
}



