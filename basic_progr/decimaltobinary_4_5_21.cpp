#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int remainder,i=1;
    int binary=0;
    while(n!=0) {
        remainder=n%2;
        n= n/2;
        binary = binary+remainder*i;
        i*=10;
    }
    return binary;
}
