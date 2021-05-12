#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
void sum_of_subarray(int array[], int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        sum=0;
        for(int j=i;j<=x;j++)
        {
            sum=sum+array[j];
            cout<<"sum of array"<<sum<<endl;
        }
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

