#include <bits/stdc++.h>
using namespace std;
void count_sort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    int count[mx + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= mx; i++)
    {
        count[i] += count[i - 1];
    }
    int sol[n];
    for (int i = n - 1; i >= 0; i--)
    {
        sol[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = sol[i];
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
    count_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
