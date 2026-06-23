#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,5,6};
    int sum=0,i;
    int*p=a;
    for(i=0;i<5;i++)
    {
        sum=sum+*(p+i);
    }
    cout<<"sum = "<<sum;
}