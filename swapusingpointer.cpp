#include<iostream>
using namespace std;
int swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    

}int main()
{
    int m,n;
    cout<<" enter 1st value = ";
    cin>>m;
    cout<<" enter 2nd value = ";
    cin>>n;
    cout<<"before swapping = ";
    cout<<" m = "<<m<<endl<<"N = "<<n<<endl;
    swap(&m,&n);
    cout<<"after swapping = ";
    cout<<" m = "<<m<<endl<<"N = "<<n;

}
