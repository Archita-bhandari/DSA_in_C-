Program to print the squares of the sorted given elements in sorted order
#include<bits/stdc++.h>
using namespace std;
        vector<int> temp;
void square(vector<int>&v,int x)
{
    int low=0;int p=0;int high=x-1;
    while(low<=high)
    {
        if(v[high]*v[high] > v[low]*v[low])
        {
           temp.push_back(v[high]*v[high]);
           high=high-1;
        }

      else{
        temp.push_back(v[low]*v[low]);
        low=low +1;
      }
    
}
}
int main()
{
    int x;
    cin>>x;
    int zero=0;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
    int y;
    cin>>y;
    v.push_back(y);
    }
    square(v,x);
    reverse(temp.begin(),temp.end());
    for(int i=0;i<x;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;

}
