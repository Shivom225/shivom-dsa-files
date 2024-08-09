#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r=0,add=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        add=(add*10)+r;
        n/=10;
    }
    cout<<add;
}