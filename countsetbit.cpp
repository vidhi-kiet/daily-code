/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Problem 3: Given a num count no. of set bit Examples :

#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"no.:";
  cin>>n;
  int a;
  for(int i=0;i<31;i++)
  {
      if((1<<i)&n)
      {
          a++;
      }
  }
  cout<<a<<endl;
    return 0;
}