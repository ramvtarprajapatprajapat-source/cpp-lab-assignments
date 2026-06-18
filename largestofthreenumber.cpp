#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter A = ";
    cin>>a;
    cout<<"enter b = ";
    cin>>b;
    
    cout<<"enter C = ";
    cin>>c;
    if(a>b&&a>c)
    {
        cout<<"a largest";
    }
    else if(b>a&&b>c)
    {
        cout<<"b largest";
    }
     else if(c>b&&c>b)
    {
        cout<<"c largest";
    }
    else 
    {
        cout<<" same value";

    }
    return 0;
}