#include <bits/stdc++.h>
// print the element in the list which is occured only once
using namespace std;
int special_element(int arr[],int n)
{
    int xor1=0;
    for(int i=0;i<n;i++)
    {
        xor1= xor1^arr[i];
    }
    return xor1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }//check the bit at the given position
    cout<<special_element(arr,n)<<endl;
    return 0;
}
