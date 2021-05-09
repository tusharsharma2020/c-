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
    for (int i=0;i<=a;i++)
    {
        for(int j =0;j<=i;j++)
        {
            cout<<factorial(i)/((factorial(i-j))*factorial(j));
        }
        cout<<endl;
    }

    return 0;
}

