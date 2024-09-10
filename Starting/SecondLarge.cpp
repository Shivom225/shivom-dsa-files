#include<iostream>
using namespace std;
int main()
{
    int a=10,b=12,c=15;
    if(a>b&&a>c)
    {
        if(b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    else if (b>a&&b>c)
    {
        if(a>c)
        {
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
     else 
    {
        if(b>a)
        {
            cout<<b;
        }
        else{
            cout<<a;
        }
    }
}