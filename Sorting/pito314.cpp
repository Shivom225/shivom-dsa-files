#include <bits/stdc++.h>
using namespace std;
void pitn(string a)
{
    if (a == "")
    {
        return;
    }
    else if (a[0] == 'p' && a[1] == 'i')
    {
        cout << "3.14";
        pitn(a.substr(2));
    }
    else
    {
        cout << a[0];
        pitn(a.substr(1));
    }
}
int main()
{
    string a = {"piippipippi"};
    pitn(a);
}