#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;

    for( int i=1; i<=rows;i++)
        {
            int j;

            for (j=1;j<=rows-i;j++){
                cout<<" ";
            }

            for (j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }


            cout<<endl;
        }
    for( int i=rows; i>=1;i--)
        {
            int j;

            for (j=1;j<=rows-i;j++){
                cout<<" ";
            }

            for (j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }


            cout<<endl;
        }


        return 0;
}
