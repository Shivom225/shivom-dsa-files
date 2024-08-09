#include<iostream>
using namespace std;
int main()
{
    int a=12,b=3,c=100;
    if(a>b&&a>c)
    {
        cout<<a;
    }
    else if (b>c&&b>a)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }

}