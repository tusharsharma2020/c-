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
   int j;
   for (i=2;i<=n;i++){
       for(j=2;j<i;j++){
           if(i%j==0){
               break;
           }
       }
       if (j==i){
           cout<<j<<"\n";
       }
   }
   return 0;
}
