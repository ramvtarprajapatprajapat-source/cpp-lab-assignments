#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter a name = ";
    cin>>s;
    
    for(int i=0;i<s.length();i++)

    {
s[i]=toupper(s[i]);
    }
    cout<<" char = "<<s;
}