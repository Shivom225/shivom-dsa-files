#include <iostream>
using namespace std;
void msort(int arr[], int s, int e)
{
    while (s < e)
    {
        int m = (s + e) / 2;
        msort(arr, s, m);
        msort(arr, m + 1, e);
        merge(arr, s, m, e);
    }
}

void merge(int arr[], int s, int m, int e)
{

    int i = s;
    int j = m + 1;
    int temp[e + 1];
    int k = 0;

    while (i <= m)
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
}