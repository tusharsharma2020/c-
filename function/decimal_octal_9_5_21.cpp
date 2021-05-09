#include <iostream>
#include <math.h>

using namespace std;
int octal_decimal(int x)
{


    int remainder,i=1;
    int octal=0;
    while(x!=0) {
        remainder=x%8;
        x= x/8;
        octal = octal+remainder*i;
        i*=10;
    }
    return octal;

}
int main()
{
    int x;
    cout<<"enter the number x ";
    cin>>x;
    cout<<octal_decimal(x)<<endl;
    return 0;
}

