#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{int m;
    cout<<" enter a number = ";
    cin>>m;
    cout<<"factorial ="<<fact(m);
}