#include <iostream>
#include <math.h>

using namespace std;
int decimal_to_binary(int num1)
{
    int binary=0;
    int i =1;
    while (num1!=0)
    {
        int remainder =num1%2;
        num1=num1/2;
        binary=binary+remainder*i;
        i*=10;
    }
    return binary;
}

int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    cout<<decimal_to_binary(a)<<endl;
    return 0;
}

