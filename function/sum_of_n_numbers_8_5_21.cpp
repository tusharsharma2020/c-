#include <iostream>
#include <math.h>

using namespace std;
int sum(int num1)
{
    int sum=0;
    for (int i=num1;i>=1;i--)
    {
        sum=sum+i;

    }
    return sum ;
}
int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    cout<<sum(a);
    return 0;
}

