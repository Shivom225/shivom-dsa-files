#include <bits/stdc++.h>
using namespace std;
bool sort(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    arr++;
    if (arr[0] < arr[1])
    {
        return true;
    }
    else
    {
        return false;
    }
    sort(arr, n);
}
int main()
{
    int n;
    n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sort(arr, n);
}