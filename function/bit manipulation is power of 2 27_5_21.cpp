#include <bits/stdc++.h>

using namespace std;
bool ispowerof2(int n)
{
    return(n && !(n & (n-1)));

}
int main()
{
    //check the bit at the given position
    cout<<ispowerof2(8)<<endl;
    return 0;
}
