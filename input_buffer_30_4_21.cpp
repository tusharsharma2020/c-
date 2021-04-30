#include<iostream>
#include<ios>
#include<limits>
using namespace std;

int main()
{
    int a;
    char str[80];
    cin >> a;
    cout<<"enter the string";
    // cin str this line will only accept a character not the string
    // so there is new line character in the input stream which will mot allow us to take a new input
    //for that we need to clear the previous input buffer
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); // this will clear the input buffer
    cin.getline(str, 80);
    cout << a << endl;
    cout << str << endl;

    return 0;
}
