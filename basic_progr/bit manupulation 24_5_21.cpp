#include <bits/stdc++.h>

using namespace std;
int getbit(int n,int p)
{
    if((n &(1<<p))==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    //check the bit at the given position
    cout<<getbit(6,2)<<endl;
    return 0;
}
