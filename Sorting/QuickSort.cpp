#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    ;
    int i = s, j = e;
    while (i <= j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[s], arr[j]);
    return j;
}
void quick_sort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quick_sort(arr, s, p - 1);
        quick_sort(arr, p + 1, e);
    }
}
int main()
{
    int n = 7;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0, e = n - 1;
    quick_sort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}