#include <iostream>
#include <math.h>

using namespace std;
bool check_pythagorean_triplet(int x,int y,int z)
{
    int a= max(x,max(y,z));
    int b;
    int c;
    if (a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=z;
    }
    if (a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int x;
    cout<<"enter the number x ";
    cin>>x;
    int y;
    cout<<"enter the number y ";
    cin>>y;
    int z;
    cout<<"enter the number z ";
    cin>>z;
    if (check_pythagorean_triplet(x,y,z))
    {
        cout<<"it is pythagorean triplet";
    }
    else
    {
        cout<<"it is not";
    }
    return 0;
}

