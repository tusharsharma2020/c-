#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
void max_of_array(int array[], int x)
{
    int max1=0;
    for(int i=1;i<=x;i++)
    {
        if (array[i]>max1)
        {
            max1=array[i];
        }
        cout<<max1<<endl;
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

    max_of_array(array , x);
    return 0;


}

