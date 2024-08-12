#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int last, ans = 0;
    while (n > 0)
    {
        last = (n % 10);
        ans = (ans * 10) + last;
        n /= 10;
    }
    return ans;
}
int main()
{
    cout << rev(1234);
}