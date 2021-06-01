#include <bits/stdc++.h>

using namespace std;
int no_of_1(int n)
{
    int count=0;
    while(n)
    {
        n= n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    //check the bit at the given position
    cout<<no_of_1(19)<<endl;
    return 0;
}
