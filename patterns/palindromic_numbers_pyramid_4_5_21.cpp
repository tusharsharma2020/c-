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
            int s=i;
            for (;j<=rows;j++){
                cout<<s--;
            }
            s=2;
            for(;j<=rows+i-1;j++){
                cout<<s++;
            }

            cout<<endl;
        }

        return 0;
}
