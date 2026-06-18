#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<" enter a number = ";
    cin>>n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout<<" count ="<<count;
}