#include<bits/stdc++.h>
using namespace std;
void prefix(vector<int>&v)
{
 for(int i=1;i<v.size();i++)
 {
  v[i]=v[i-1]+v[i];
 }
}
int main()
{
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    prefix(v);
    cout<<"The prefix sum array is : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
