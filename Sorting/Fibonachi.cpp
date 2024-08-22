#include <bits/stdc++.h>
using namespace std;
int fib(int x)
{
    if (x <= 1)
    {
        return x;
    }
    return fib(x - 1) + (x - 2);
}
int main()
{
    int x = 5;
    cout << fib(x);
}