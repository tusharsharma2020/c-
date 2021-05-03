#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;
    int count1=1;
    for( int i=1; i<=rows;i++)
        {
            for ( int j=1;j<=i;j++)
                {
                    cout<<count1;
                    count1++;
                }
            cout<<"\n";
        }

        return 0;
}
