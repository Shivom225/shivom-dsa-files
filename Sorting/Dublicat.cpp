#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = {"ababababababab"};
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 1; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
            }
            else
            {
                cout << a[i];
            }
        }
    }
}