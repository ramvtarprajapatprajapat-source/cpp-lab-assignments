#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    int i;
    cout<<"size of array = ";
    cin>>n;
    int a[1000];
    cout<<"enter the array = ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<" sum = "<<sum;
}
    