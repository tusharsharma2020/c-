#include <iostream>
using namespace std;
int main()
{
    int i ;
    cout<<"enter the number";
    cin>> i;
label:
    cout<<i;
    i++;
    if (i<=50){
            goto label;
    }
    return 0;
}
