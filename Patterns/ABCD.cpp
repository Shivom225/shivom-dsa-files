#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<x++;
        }
        cout<<endl;
        x='A';
    }
}