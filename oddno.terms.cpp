/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
cout<<"odd or not:";
    int n;
    cin>>n;
    int a[n];
    int i;
   int res=0;
   cout<<"array :"<<endl;
   
   for(i=0;i<n;i++)
   {
       cout<<"arr:";
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       res=res^a[i];
   }
   cout<<res<<endl;
    return 0;
    return 0;
}