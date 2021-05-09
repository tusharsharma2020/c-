#include <iostream>
#include <math.h>

using namespace std;
int octal_decimal(int x)
{
    int deci,i=0;
    int b;
    while(x!=0)
    {
        int remainder=x%10;
        b=pow(8,i);
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
    cout<<octal_decimal(x)<<endl;
    return 0;
}

