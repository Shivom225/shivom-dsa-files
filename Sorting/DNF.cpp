#include <bits/stdc++.h>
using namespace std;
void DNF(int arr[], int n)
{
    int m = 0, s = 0, e = n - 1;
    while (m <= e)
    {
        if (arr[m] == 1)
        {
            m++;
        }
        else if (arr[m] == 0)
        {
            swap(arr[m], arr[s]);
            m++;
            s++;
        }
        else
        {
            swap(arr[m], arr[e]);
            e--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    DNF(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}