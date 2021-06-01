#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the range";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements";
    int i=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix will be"<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"now the spiral matrix will be"<<endl;
    i=0;
    for(j=0;j<m;j++)
    {
        cout<<arr[i][j]<<endl;
    }

    j=m-1;
    for(i=1;i<n;i++)
    {
        cout<<arr[i][j]<<endl;
    }
    i=n-1;
    for(j=m-2;j>=0;j--)
    {
        cout<<arr[i][j]<<endl;
    }
    j=0;
    for(i=n-2;i>0;i--)
    {
        cout<<arr[i][j]<<endl;
    }

    return 0;


}
