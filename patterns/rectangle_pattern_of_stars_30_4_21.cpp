#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;
    int columns;
    cout<<"enter the columns";
    cin>>columns;

    for( int i=1; i<=rows;i++)
        {
            for ( int j=1;j<=columns;j++)
                {
                    cout<<"*";
                }
            cout<<"\n";
        }

        return 0;
}
