#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
void sum_of_subarray(int array[], int x)
{

    for(int i=1;i<=x;i++)
    {

        for(int j=i;j<=x;j++)
        {

            cout<<"subarray will be"<<array[j]<<",";
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int x;
    cout<<"enter the range of array you want to enter";
    cin>>x;
    int array[x];
    cout<<"enter the elements";
    for(int i=1;i<=x;i++)
    {
        cin>>array[i];
    }

    sum_of_subarray(array , x);
    return 0;
}


