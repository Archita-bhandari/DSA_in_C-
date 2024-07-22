C++ program to print alphabet patterns
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s={"ABCDEFGHI"};
    for(int i=1;i<=s.size();i=i+2)
    {
        for(int j=6;j>=i;j=j-2)
        {
        cout<<" ";
        }
      cout<<s.substr(0,i)<<endl;
    }
     for(int i=s.size()-2;i>=0;i--)
    {
         for(int j=s.size()-2;j<=6;j=j+2)
        {
        cout<<" ";
        }
      cout<<s.substr(0,i)<<endl;
    }
}
