/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int f(int n)
{
    
    if(n==0)
     return 0;
    
    return n+f(n-1);
    
}

int main()
{
    cout<<"enetre:";
    int n;
    cin>>n;
    
   cout<< f(n);

    return 0;
}