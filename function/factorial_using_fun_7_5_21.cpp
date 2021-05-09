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
    int n;
    cout<<"enter the number n ";
    cin>>n;
    int r;
    cout<<"enter the number r ";
    cin>>r;

    int ans =factorial(n)/((factorial(n-r))*factorial(r));;
    cout<<ans<<endl;
    return 0;
}

