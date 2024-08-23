#include <bits/stdc++.h>
using namespace std;

string remove(string a)
{
    if (a == "")
    {
        return "";
    }
    char ch = a[0];
    string ans = remove(a.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }

    return ch + ans;
}
int main()
{
    string a = {"xxxyzzzw"};
    cout << remove(a);
}