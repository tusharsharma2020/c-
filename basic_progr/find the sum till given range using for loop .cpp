/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"enter the num";
    cin>>a;
    int sum = 0;
    for(int count=0 ; count<=a; count++) {
        sum=sum+count;
        
    }
    cout<<sum;
    return 0;
}
