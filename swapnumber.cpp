#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
      cout<<"enter A = ";
    cin>>a;
    cout<<"enter B = ";
    cin>>b;
    
    cout<<"before swapping =";
    cout<<" A = "<<a<<endl;
    cout<<" B = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<" after swapping =";
     cout<<" A = "<<a<<endl;
    cout<<" B = "<<b<<endl;
    //second mathod;
    cout<<" SECOND METHOD NON USEING THIRED VARIABLE = "<<endl;
 cout<<"before swapping =";
    cout<<" A = "<<a<<endl;
    cout<<" B = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
cout<<" after swapping =";
     cout<<" A = "<<a<<endl;
    cout<<" B = "<<b;
return 0;
}