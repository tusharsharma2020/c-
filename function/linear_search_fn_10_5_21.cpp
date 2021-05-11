#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
void linear_search(int array[], int x, int key)
{
    for (int i=1;i<=x;i++)
    {
        if (key==array[i])
        {
            cout<<i<<endl;
        }
    }
    return;


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
    linear_search(array,x,key);


    return 0;
}

