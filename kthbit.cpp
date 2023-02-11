/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void kthbit(int n,int k)
{
  int x=1<<(k-1);
  if((n&x)==1)
  {
      cout<<"set"<<endl;
  }
  else
  {
      cout<<"not"<<endl;
  }
  
}

int main()
{
    int n,k;

    cout<<"enter no.:";
     cin>>n;
   cout<<"enter pos:";
   cin>>k;
   
   kthbit(n,k);
    return 0;
}