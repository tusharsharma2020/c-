#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;
    int count=1;
    for( int i=rows; i>=1;i--)
        {
            for ( int j=1;j<=rows;j++)
                {
                    if(j<=rows-i)
                        {
                            cout<<" ";
                        }
                    else
                        {
                            cout<<count;
                            count++;
                        }
                }
            cout<<"\n";
        }

        return 0;
}
