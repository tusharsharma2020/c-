#include <iostream>
#include <math.h>

using namespace std;
int binary_decimal(int x)
{
    int deci,i=0;
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
int main()
{
    int x;
    cout<<"enter the number x ";
    cin>>x;
    cout<<binary_decimal(x)<<endl;
    return 0;
}

