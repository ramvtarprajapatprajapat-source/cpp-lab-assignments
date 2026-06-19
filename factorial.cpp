#include<iostream>
using namespace std;
int factorial(int n)
{int fact=1,i;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;}
int main()
{
    int m;
    cout<<" entere a number = ";
    cin>>m;
    
    cout<<"factorial number = "<<factorial(m);
}