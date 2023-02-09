/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//4.Swap two numbers without using a temporary variable

#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cout<<"no.:";
  cin>>a>>b;
  cout<<"\nswap:";
  
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nno. become:"<<a<<" "<<b;
    
    return 0;
}