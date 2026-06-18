#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    if(number>=90)
    {
        cout<<" +A grade ";

    }
    else if(number<90&&number>=80)
    {
        cout<<" A grade ";
    }
       else if(number<80&&number>=70)
    {
        cout<<" B grade ";
    }
       else if(number<70&&number>=60)
    {
        cout<<" C grade ";
    }
       else if(number<60&&number>=50)
    {
        cout<<" D grade ";
    }
       else if(number<50&&number>=33)
    {
        cout<<" E grade ";
    }
    else
    {
        cout<<" fail ";
    }
}