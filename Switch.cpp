#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch (n)
    {
        case 1: cout<<"Monday"; break;
        case 2: cout<<"tueday"; break;
        case 3: cout<<"wedday"; break;
        case 4: cout<<"thusday"; break;
        case 5: cout<<"friday"; break;
        case 6: cout<<"satday"; break;
        case 7: cout<<"sunday"; break;
        default : cout<<"Invalid OP";
    }
}