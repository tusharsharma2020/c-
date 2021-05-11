#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

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
    int temp;

    for (int i =1;i<x;i++){
            int mini=i;
            for(int j=i+1;j<=x;j++){
                if(array[j]<array[mini]){
                    mini=j;
                }
            }
            temp=array[i];
            array[i]=array[mini];
            array[mini]=temp;
      }
    for(int i=1;i<=x;i++)
    {
        cout<<array[i]<<",";
    }


}

