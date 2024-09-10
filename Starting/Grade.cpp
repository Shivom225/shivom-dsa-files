#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m<25)
    {
        cout<<"F";
    }
        else if(m<=35)
    {
        cout<<"D";
    }
    else if(m<=45)
    {
        cout<<"D";
    }
        else if(m<=55)
    {
        cout<<"C";
    }
        else if(m<=65)
    {
        cout<<"B";
    }
        else if(m<=75)
    {
        cout<<"B+";
    }
        else if(m<=85)
    {
        cout<<"A";
    }
        else if(m<=100)
    {
        cout<<"A++";
    }
    else 
    {
        cout<<"Invalid OP";
    }
}