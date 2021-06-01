#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *po= &n;
    cout<<"the value of n- n  "<<n<<endl;
    cout<<"address of n- po "<<po<<endl;
    cout<<"also the address of n- &n "<<&n<<endl;
    cout<<"the value of n- *po "<<*po<<endl;
    int arr[]={10,20,30,40,50};
    int *p=arr;
    int **s=&po;
    cout<<"address of po- **s "<<**s<<endl;
    cout<<"address of po- *s "<<*s<<endl;
    cout<<"first value of arr- *p "<<*p<<endl;
    cout<<"now this will acess the listy one by one"<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
        //p++;
    }
    return 0;
}
