#include <iostream>
#include <math.h>

using namespace std;
bool check_even_odd(int num1)
{
    if(num1%2!=0)
    {
        return false;
    }
    return true;

}

int main()
{
    int a;
    cout<<"enter the number a ";
    cin>>a;
    if(check_even_odd(a)==true)
    {
        cout<<"even"<<endl;

    }
    else
    {
        cout<<"odd"<<endl;
    }

    return 0;
}

