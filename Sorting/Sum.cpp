#include <bits/stdc++.h>
using namespace std;

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    int rest = sum(x - 1);
    return x + rest;
}
int main()
{
    int x = 5;
    cout << sum(x);
}