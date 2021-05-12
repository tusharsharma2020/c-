#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout<<"enter the range of array you want to enter";
    cin>>x;
    int array[x];
    cout<<"enter the elements";
    for(int i=0;i<x;i++)
    {
        cin>>array[i];
    }
    int count=0;
    for (int i=1;i<=x;i++)
    {
        if(array[i]>array[i-1] && array[i]>array[i+1])
        {
            count = count+1;
        }
    }
    cout<<"the record breaking days are "<<count<<endl;
    return 0;
}


