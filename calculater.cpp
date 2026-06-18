#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
 cout<<"enter A = ";
    cin>>a;
    cout<<"enter b = ";
    cin>>b;
    cout<<" enter a choice = ";
    cin>>n;
    switch(n)
    {

                case 1 : cout<<"sum ="<<a+b;
        break;
                case 2 : cout<<"mains ="<<a-b;
        break;
                case 3 : cout<<"multi ="<<a*b;
        break;
                case 4 : cout<<"divide ="<<a/b;
        break;

    
    default : cout<<"other condition";
}
}