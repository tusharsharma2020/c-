#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string s1="your";
    string s2="self";
    cout<<"string is "<<str<<endl;
    cout<<"concatinated string is "<<s1+s2<<endl;
    s1.append(s2);
    cout<<"s1 is "<<s1<<endl;
    cout<<"traversing through string is "<<s1[6]<<endl;
    if(s2.compare(s1))
    {
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"they are not equal"<<endl;
    }
    cout<<s1.erase(2,1)<<endl;// pahla argument - index , second argument - no. of elements
    cout<<str.empty()<<endl;
    cout<<s2.find("el")<<endl;
    cout<<s1.insert(3,"lol")<<endl;
    cout<<s2.size()<<endl;
    cout<<str.empty()<<endl;
    for(int i=0;i<s1.length();i++)
        cout<<s1[i]<<endl;
    cout<<s1.substr(4,2)<<endl;
    string s3="963";
    cout<<stoi(s3)<<endl;// converts into integer
    int a=156;
    cout<<to_string(a)<<endl;
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;





    return 0;
}
