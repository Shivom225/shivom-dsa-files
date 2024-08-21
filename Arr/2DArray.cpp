#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << i << " " << j;
                break;
            }
        }
    }
}