#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the range";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key=0;
    cout<<"enter the key you want to search";
    cin>>key;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(key==arr[i][j]){
                cout<<"the element is found at"<<i+1<<j+1;
            }
        }
    }
    return 0;


}
