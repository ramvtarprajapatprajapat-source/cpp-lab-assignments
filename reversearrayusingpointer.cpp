#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,5,6};

    int*p=a;
    for(int i=4;i>=0;i--)
    {
        cout<<*(p+i)<<" ";
    }
    
}