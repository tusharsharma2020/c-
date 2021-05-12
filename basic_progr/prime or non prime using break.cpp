/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"enter the n ";
   cin>>n;
   int i ;
   for (i=2; i<n; i++) {
       if(n%i==0){
           cout<<"non prime";
           break;
       }
   }
   if(i==n){
       cout<<"prime";
       
   }
   
    
    return 0;
}
