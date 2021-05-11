#include <iostream>
#include <math.h>
#include <climits>

using namespace std;


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
    for(int i=1;i<=x;i++)
    {
        cout<<array[i]<<",";
    }
    int max=INT_MIN;// this line will assign the max as -minimum integer value that c has and for that header file climits is included
    cout<<max<<endl;
    for (int i=1;i<=x;i++)
    {
        if (max<=array[i])
        {
            max= array[i];
        }
    }
    cout<<endl<<"max of the array is"<<max;



    return 0;
}

