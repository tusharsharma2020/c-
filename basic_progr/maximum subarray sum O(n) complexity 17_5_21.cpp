#include <bits/stdc++.h>
using namespace std; //this prog will find the sum of subarray which has max sum and positive integer
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
    int cfsum=0;
    int max_sum=INT_MIN;
    for(int i=1; i<=n;i++)
    {
        cfsum=cfsum+arr[i];
        if (cfsum<0)
        {
            cfsum=0;
        }
        max_sum=max(max_sum,cfsum);


    }
    cout<<max_sum<<",";

    return 0;


}
