/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int oddno(int a[],int n)
{
    int count;
    int i,j;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            return a[i];
        }
        
    }
    
    return -1;
    
}

int main()
{
cout<<"odd or not:";
    int n;
    cin>>n;
    int a[n];
    int i;
   int res=a[0];
   cout<<"array :"<<endl;
   
   for(i=0;i<n;i++)
   {
       cout<<"arr:";
       cin>>a[i];
   }
   
   int p=oddno(a,n);
   cout<<"no. is:"<<p<<endl;
  return 0;
}