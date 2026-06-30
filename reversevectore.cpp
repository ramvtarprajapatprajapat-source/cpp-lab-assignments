#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int n,x;
    cout<<" eneter the size of array ";
    cin>>n;
    cout<<"enter the array ";
    
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        cout<<" output  ";
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<< " ";
        }

    
}
