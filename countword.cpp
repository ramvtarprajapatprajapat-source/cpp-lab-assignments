#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter a name = ";
    getline(cin,s);
    int count=1,i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
    {
        count++;
    }
}
cout<<" word = "<<count;
}
