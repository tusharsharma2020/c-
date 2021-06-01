#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the range";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements";

    for( int i=0;i<n;i++)
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
    cout<<"transpose matrix will be"<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i];
        }
        cout<<"\n";
    }
    return 0;
}
