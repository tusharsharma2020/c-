#include <iostream>
#include <math.h>

using namespace std;
int main() // armstrong
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int armstrong=0;
    int originaln=n;

    while(n!=0){
        int remainder = n%10;

        armstrong = armstrong + pow(remainder,3);
        n=n/10;


    }
    if (armstrong==originaln){
        cout<<"armstrong";
    }
    else {
        cout<<"not armstrong";
    }

    return 0;
}
