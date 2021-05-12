#include <iostream>
using namespace std;
int main() // reverse
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int reverse1 =0;
    int remainder=1;
    while(n!=0){
        remainder = n%10;
        n=n/10;
        reverse1 = reverse1*10+ remainder;


    }
    return reverse1;
}
