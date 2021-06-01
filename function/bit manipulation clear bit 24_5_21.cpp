#include <bits/stdc++.h>

using namespace std;
int clearbit(int n,int p)
{
    int s=~(1<<p);


    return (n & s);

}
int main()
{
    //check the bit at the given position
    cout<<clearbit(6,2)<<endl;
    return 0;
}
