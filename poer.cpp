#include<iostream>
using namespace std;
int pow(int a,int b)

{int ans=1;
for(int i=1;i<=b;i++)
{
    ans=ans*a;
}
return ans;
}
int main()
{
    int base,exp;
    cout<<" entere a number = ";
    cin>>base;
    cout<<"enter a number = ";
    cin>>exp;
    cout<<"max number = "<<pow(base,exp);
}