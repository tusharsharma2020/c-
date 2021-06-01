#include <bits/stdc++.h>
#include <iostream>
// print the element in the list which is occured only once
using namespace std;
void prime_sieve_erastosness(int n)
{
    int b[n]={0};
    for(int i=2;i<=n;i++)
    {
        if(b[i]==0)
            for(int j=i*i;j<=n;j+=i)
            b[j]=1;
    }
    for(int i=2;i<=n;i++){
        if(b[i]==0){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;


    prime_sieve_erastosness(n);
    return 0;
}
