/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Problem 2: Given a number N, find the most significant set bit in the given number. Examples:

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a no.";
    cin>>n;
    int msb=0;
    while(n>0)
    {
        n=n/2;
        msb++;
    }
     cout<<(1<<(msb-1))<<endl;
    return 0;
}