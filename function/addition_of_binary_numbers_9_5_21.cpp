#include <iostream>
#include <math.h>

using namespace std;

int binary_decimal(int x)
{
    int deci=0,i=0;
    int b;
    while(x!=0)
    {
        int remainder=x%10;
        b=pow(2,i);
        deci =deci+(remainder*b);
        x=x/10;
        i+=1;

    }
    return deci;
}
int decimal_binary(int x)
{
    int i=1;
    int binary =0;
    while(x!=0) {
        int remainder=x%2;
        x= x/2;
        binary = binary+remainder*i;
        i*=10;
    }
    return binary;

}

int main()
{
    int x;
    cout<<"enter the binary number x ";
    cin>>x;
    int y;
    cout<<"enter the binary number y ";

    cin>>y;
    int a = binary_decimal(x);
    int b= binary_decimal(y);
    int c = a+b;
    cout<<"a  will be"<<a<<endl;
    cout<<"b  will be"<<b<<endl;

    cout<<"addition of 2 will be "<<c<<endl;
    cout<<decimal_binary(c)<<endl;
    return 0;
}

