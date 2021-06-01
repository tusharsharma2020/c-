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
    int cfsum[n+1];
    int sum=0;

    int max_sum=INT_MIN;
    for(int i=1; i<=n;i++)
    {
        cfsum[i]=cfsum[i-1]+arr[i-1];
        for(int j=0;j<i;j++)
        {
            sum=cfsum[i]-cfsum[j];

            max_sum=max(max_sum,sum);
        }

    }
    cout<<max_sum<<",";

    return 0;


}
