#include<iostream>
using namespace std;
int main()
{
    int n,largest=-1;
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
    if(a[i]>largest)
    {
        largest=a[i];
    }
   int  secondlargest=-1;
   for(i=0;i<n;i++)
   {
   if(a[i]!=largest)
{
    if(a[i]>secondlargest);
{
    secondlargest=a[i];
}
}
}
cout<<secondlargest;
}