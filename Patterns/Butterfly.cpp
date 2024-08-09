#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int s=1;s<=(n-i)*2;s++)
        {
            cout<<" ";
        }
        for(int a=i;a>=1;a--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int s=1;s<=(n-i)*2;s++)
        {
            cout<<" ";
        }
        for(int a=i;a>=1;a--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}