#include <iostream>
#include <math.h>

using namespace std;
void fibonacci(int num1)
{
    int n0=0;
    int n1=1;

    for (int i=1;i<=num1;i++)
    {
        cout<<n0<<endl;
        int sum=n0+n1;
        n0=n1;
        n1=sum;


    }
    return;
}

int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    fibonacci(a);
    return 0;
}

