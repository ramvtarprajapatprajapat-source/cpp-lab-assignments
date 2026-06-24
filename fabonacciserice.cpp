#include<iostream>
using namespace std;
int fabb(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    return fabb(n-1)+fabb(n-2);
}
int main()
{int m;
    cout<<" enter a number = ";
    cin>>m;
    for(int i=0;i<m;i++)
    cout<<fabb(i);
}