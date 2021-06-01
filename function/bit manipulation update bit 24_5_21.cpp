#include <bits/stdc++.h>

using namespace std;
int updatebit(int n,int p, int value)
{
    int c= value<<p;
    int s=~(1<<p);
    int y= n & s;
    int z= y|c ;
    return z;

}
int main()
{
    //check the bit at the given position
    cout<<updatebit(6,2,1)<<endl;
    return 0;
}
