#include <iostream>
#include <math.h>

using namespace std;
int ischeckprime(int num1)
{
    for (int i =2;i<=sqrt(num1);i++)
    {
        if(num1%i==0)
        {
            return false;

        }
    }
    return true;

}

int main() // armstrong
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    int b;
    cout<<"enter the number b";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(ischeckprime(i)==true)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

