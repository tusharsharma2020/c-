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
            for(int j=0;j<=x-i;j++){
                if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;;
                }
            }

      }
    for(int i=1;i<=x;i++)
    {
        cout<<array[i]<<",";
    }


}

