#include<iostream>
using namespace std;
void reverse(string s)
{ if(s.length()==0)
    return ;
    reverse(s.substr(1));
    cout<<s[0];
    
}
int main()
{string s;
    cout<<" enter a string = ";
    cin>>s;
reverse(s);
}