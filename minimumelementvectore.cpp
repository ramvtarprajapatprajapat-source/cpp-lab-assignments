#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n,x;
   
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the array ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    } int min=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<min){
        min=v[i];}
    }
    cout<<" min = "<<min;
}