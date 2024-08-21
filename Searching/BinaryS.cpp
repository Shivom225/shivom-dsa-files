#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        else if (arr[m] > key)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[binary_search(arr, n, key)] == key)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}