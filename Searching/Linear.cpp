#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int key, n = 5;
    cin >> key;
    int arr[n] = {1, 2, 3, 4, 5};
    if (linear_search(arr, n, key) == -1)
    {
        cout << "Not Present";
    }
    else
    {
        cout << "Yes";
    }
}