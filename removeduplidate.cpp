#include<iostream>
#include<vector>
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
        vector<int>ans;
        for(int i=0;i<v.size();i++){
        if(i==0||v[i]!=v[i-1])
        {
            ans.push_back(v[i]);
        }
      
    }
        cout<<" output  ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<< " ";
        }

    
}
