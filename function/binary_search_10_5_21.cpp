#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
int binary_search(int array[], int x, int key)
{
    int s=0;
    int l=x;
    while(s<=l){
        int mid=(s+l)/2;
        if (array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            l= mid-1;
        }
        else {
            s=mid+1;
        }
    }

    return -1;


}

int main()
{
    int x;
    cout<<"enter the range of array you want to enter";
    cin>>x;
    int array[x];
    cout<<"enter the elements";
    for(int i=1;i<=x;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"enter the key that you want to search";
    cin>>key;
    return binary_search(array,x,key);


}

