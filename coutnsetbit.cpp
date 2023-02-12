/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int countbit(int n)
{
    int res=0;
     while(n>0)
     {
         if((n&1)==1)
         {
             res++;
         }
         n=n>>1;
     }
     return res;
}

int main()
{
    cout<<"enter no.:";
  int n;
  cin>>n;
  
  cout<<"count set bit:"<<countbit(n)<<endl;
  
    return 0;
}