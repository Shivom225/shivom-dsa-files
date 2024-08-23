#include <bits/stdc++.h>
using namespace std;
bool sort(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    return arr[0] < arr[1] && sort(arr++, n - 1);
}
int main()
{
    int n = 5;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sort(arr, n);
}