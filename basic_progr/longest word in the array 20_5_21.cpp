#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int st=0,maxst=0;
    int maxlength=0;
    int i=0;
    int len=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]== '\0'){
            if(len>maxlength){
                maxlength=len;
                maxst=st;
            }
            len=0;
            st=i+1;
        }
        else
        len++;
        if(arr[i]== '\0'){
            break;
        }
        i++;
    }
    cout<<maxlength<<endl;
    for(int i=0;i<maxlength;i++)
        cout<<arr[i+maxst];
    return 0;
}
