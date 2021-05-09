#include <iostream>
#include <math.h>

using namespace std;
int factorial(int num1)
{
    int fact=1;
    for (int i=num1;i>=1;i--)
    {
        fact=fact*i;

    }
    return fact;
}

int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;

    int ans = factorial(a);
    cout<<ans<<endl;
    return 0;
}

