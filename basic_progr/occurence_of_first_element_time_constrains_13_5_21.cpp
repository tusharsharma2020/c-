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

    int N=1e+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int min1=INT_MAX;

    for(int i=0;i<x;i++)
    {
        if(idx[array[i]]!=-1)
        {
            min1=min(min1,idx[array[i]]);

        }
        else
        {
            idx[array[i]]=i;
        }

    }
    if(min1==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int y=min1+1;
        cout<<y<<endl;
    }

    return 0;
}


