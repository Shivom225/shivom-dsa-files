#include <bits/stdc++.h>
using namespace std;
void inc(int x)
{
    if (x == 0)
    {
        return;
    }
    inc(x - 1);
    cout << x << " ";
}
int main()
{
    int x = 5;
    inc(5);
}