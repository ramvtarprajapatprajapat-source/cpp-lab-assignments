#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,7,4,9,76};
    int max,i;
    int*ptr=a;
    max=a[0];
    for(i=0;i<5;i++)
    {
            if(*(ptr+i)>max)
            max=*(ptr+i);

    }
    cout<<" max = "<<max;
}