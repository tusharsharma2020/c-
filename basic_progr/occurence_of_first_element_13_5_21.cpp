#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout<<"enter the range of array you want to enter";
    cin>>x;
    int array[x];
    cout<<"enter the elements";
    for(int i=0;i<x;i++)
    {
        cin>>array[i];
    }
    int s=0;
    int l=x;
    for(int i=1;i<=x;i++)
    {
        int key=array[i];
        while(s<=l)
        {
            int mid=(s+l)/2;
            if (array[mid]==key)
            {
                return (mid+1);
            }
            else if(array[mid]>key)
            {
                l= mid-1;
            }
            else
            {
                s=mid+1;
            }
            s=s+1;
        }
        return -1;
    }
    return -1;
}


