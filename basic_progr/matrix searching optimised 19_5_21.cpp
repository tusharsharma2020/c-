#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,key;
    cout<<"enter the range";
    cin>>n>>m;
    cout<<"enter the key you want to search";
    cin>>key;
    int arr[n][m];

    cout<<"enter the elements of matrix";

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
    int r=0,col=m-1;
    bool found= false;
    while(r<=n && col>=0)
    {
        if(arr[r][col]==key)
        {
            found= true;

        }
        if(arr[r][col]> key)
        {
            col--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}
