#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int r=0,a=0,w=n;
while(n>0)
{
    if(n==1)
    {
        n=0;
        a=w;
    }
    else
    {
    r=n%10;
    n/=10;
    a=a+r*r*r;
    }
}
if(a==w)
{
cout<<"Yes It Is Amstrong";
}
else{
    cout<<"No";
}
}