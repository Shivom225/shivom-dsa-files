#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if (str == "")
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}
int main()
{
    string str = {"HELLO"};
    reverse(str);
}