#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter a name = ";
    cin>>s;
    string temp=s;
    int start=0,end=s.length()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        
        start++;
        end--;
    }
    if(temp==s)
    {
        cout<<"palldrone ";

    }
    else{
        cout<<"not palldrone "
;    }

}