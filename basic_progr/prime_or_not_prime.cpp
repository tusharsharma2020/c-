#include <iostream>
using namespace std;
int main() // check whether a number is prime or not
{
    int n;
    cout<<"enter the number";
    cin>>n;
    bool flag=0;
    for (int i =2 ;i<n;i++){
        if(n%i==0){
            cout<<"it is not prime";
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }


    return 0;
}
