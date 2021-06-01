#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the range";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int N=1e+2;
    int y[N];
    for(int i=0; i<N;i++)
    {
        y[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            y[arr[i]]= 1;
        }
    }
    int misnum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(y[i]==0)
        {
            misnum= i;
            break;
        }
    }
    cout<<"smallest element missing"<<misnum<<endl;
    return 0;

}
