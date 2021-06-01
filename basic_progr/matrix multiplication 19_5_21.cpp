#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter the range";
    cin>>n1>>n2>>n3;
    int arr[n1][n2];
    int arr1[n2][n3];
    cout<<"enter the elements of first matrix";

    for( int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elements of second matrix";
    for( int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"the matrix will be"<<endl;
    for(int i=0; i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    cout<<endl;
    for(int i=0;i<n2;i++)
    {

        for(int j=0;j<n3;j++)
        {
            cout<<arr1[i][j];
        }
        cout<<endl;
    }
    cout<<"matrix multiplication will be"<<endl;
    int ans[n1][n3];
    for(int i=0; i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]=ans[i][j]+(arr[i][k]*arr1[k][j]);
            }
        }
    }
    for(int i=0;i<n1;i++)
    {

        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}
