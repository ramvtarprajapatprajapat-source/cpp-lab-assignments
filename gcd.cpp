#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0){
    
        
        int temp;
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int m,n;
    cout<<" entere a number = ";
    cin>>m;
    cout<<"enter a number = ";
    cin>>n;
    cout<<"GCD number = "<<gcd(m,n);
}