#include <bits/stdc++.h>
using namespace std;
void dtb(int x)
{
    if (x == 0)
    {
        return;
    }
    dtb(x / 2);
    cout << x % 2;
}
int main()
{
    int x = 56;
    dtb(x);
}