#include <iostream>
#include <math.h>

using namespace std;
int printreverse(int num1)
{
    int reverse_num=0;
    int remainder;
    while( num1!=0)
    {
        remainder=num1%10;
        num1=num1/10;
        reverse_num=reverse_num*10+remainder;

    }
    return reverse_num;

}

int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    cout<<printreverse(a)<<endl;
    return 0;
}

