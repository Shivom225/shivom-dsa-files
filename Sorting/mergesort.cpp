#include <iostream>
using namespace std;
void Mergee(int arr[], int s, int e, int m)
{
    int i = s;
    int j = m + 1;
    int temp[e + 1];
    int k = s;

    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }

        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= e)
    {
        temp[k] = arr[j];

        j++;
        k++;
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}
void Merge_sort(int arr[], int s, int e)
{
    if (s < e)
    {
        int m = (s + e) >> 1; // Divide by 2

        Merge_sort(arr, s, m);
        Merge_sort(arr, m + 1, e);
        Mergee(arr, s, e, m);
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

    int s = 0;
    int e = n - 1;

    Merge_sort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}