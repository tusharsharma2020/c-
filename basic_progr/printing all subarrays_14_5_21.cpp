#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the range";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"subarrays will be"<<endl;
    for(int i=1; i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }

    }
    return 0;


}
