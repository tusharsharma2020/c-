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
    for (int i =2;i<=x;i++)
    {
        int j= i-1;
        int key=array[i];
        while(j>0 && array[j]>array[j+1])
        {
            array[j+1]=array[j];
            array[j]=key;
            j--;
        }
        array[j+1]=key;
    }

    for(int i=1;i<=x;i++)
    {
        cout<<array[i]<<"\t";
    }
    return 0;


}

