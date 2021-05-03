#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;

    for( int i=rows; i>=1;i--)
        {
            for ( int j=1;j<=i;j++)
                {
                    cout<<j;
                }
            cout<<"\n";
        }

        return 0;
}
