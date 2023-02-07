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
    int n;
    cout<<"enter a no.";
    cin>>n;
    //n&(n-1) always give zerolike 4 and 3 using bit manupulation
    if((n & (n-1))==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

    return 0;
}