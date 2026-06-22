#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter a name = ";
    cin>>s;
    int count=0,i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='u')
    {
        count++;
    }
}
cout<<" vovle = "<<count;
}
