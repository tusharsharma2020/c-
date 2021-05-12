/******************************************************************************

to tell whether a number is divisible by 2 and 3 , 2 or 3 or not 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a ;
    
    cout<<"enter a number =";
    cin>>a;
    if(a%2==0 && a%3==0){
        cout<<"a is divisible by both";
    }
    else if(a%2==0 || a%3==0){
        if (a%2==0){
            cout<<"a is divisible by 2"; 
        }
        else if (a%3==0){
            cout<<"a is divisible by 3";
        }
        
    }
    else {
        cout<<"divisible by none";
    }

    return 0;
}
