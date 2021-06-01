#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    cout<<arr<<endl;
    bool chech= true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i]){
            chech= false;
            break;
        }
    }
    if(chech==true){
        cout<<"it is palindrome string ";
    }
    else {
        cout<<"it is not";
    }
    return 0;
}
