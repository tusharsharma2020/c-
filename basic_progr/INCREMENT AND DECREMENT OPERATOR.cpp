/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i=1, j=3, k=7;
    int l=0;
    //1      //2   //4   //6  //4   //6   //4
    l= i++ + i++ + ++j + --k + j++ - k++ + --j;
    cout << l;
    cout << i;//3
    cout << j;//4
    cout << k;//7
    

    return 0;
}
