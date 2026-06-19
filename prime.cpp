#include<iostream>
using namespace std;
int prime(int n)
{
    int i;
    while(n<2)
    return 0;
    {for(i=2;i<n;i++)
        if(n%i==0)
        {return 0;
        }
        else 
    return 1;
        
    }
    return 0;

}
int main()
{
    int a;
    cout<<" enter number = ";
    cin>>a;
    cout<<prime(a);
    
}