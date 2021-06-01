#include <bits/stdc++.h>
using namespace std;
void swap(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b= temp;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int *po= &n;
    int *s= &m;
    cout<<po<<" before swapping "<<s<<endl;
    swap(po,s);
    cout<<po<<" after swapping "<<s<<endl;
    cout<<n<<" after swapping "<<m<<endl;
    return 0;
}
