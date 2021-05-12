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
    int pd= array[1]-array[0];
    int ans=2;
    int curr=2;
    int j=2;
    while(j<x)
    {
        if(pd == array[j]-array[j-1])
        {
            curr=curr+1;
        }
        else
        {
            pd=array[j]-array[j-1];
            curr=2;
        }
        ans=max(curr,ans);
        j=j+1;
    }
    cout<<"no. of elements longest airthmetic array have"<<ans<<endl;


    return 0;
}


