/******************************************************************************
input a number and tell whether it is greate than , less than , or equal to 10 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number" ;
    cin>>a;
    if(a<10)
    {
        cout<<"a is less than 10";
        
    }
    if (a>10){
        cout<<"a is greater than 10";
        
    }
    else{
        cout<<"a is equal than 10";
        
    }

    return 0;
}

