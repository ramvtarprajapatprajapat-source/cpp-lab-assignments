#include<iostream>
using namespace std;
int main()
{
    int a[10],min;
    cout<<" enter a number = ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
min=a[0];
  for(int i=1;i<10;i++){
 if(a[i]<min)
 {
    min=a[i];
 }
}
    
        cout<<" minimum number = "<<min;



}