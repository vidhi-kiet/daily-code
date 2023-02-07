/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Problem 3: Given a number N, the task is to find the XOR of all numbers from 1 to N. Examples :

#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"no.:";
  cin>>n;
  int a;
  for(int i=1;i<=n;i++)
  {
      a=a^i;
  }
  cout<<a<<endl;
    return 0;
}