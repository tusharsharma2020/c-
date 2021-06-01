#include <bits/stdc++.h>

using namespace std;
int setbit(int n,int p)
{
    return (n |(1<<p));

}
int main()
{
    //check the bit at the given position
    cout<<setbit(8,2)<<endl;
    return 0;
}
