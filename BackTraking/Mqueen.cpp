#include <bits/stdc++.h>
using namespace std;

bool is_safe(int **arr, int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][y] == 1)
        {
            return false;
        }
    }

    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x, col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool Nqueen(int **arr, int n, int x)
{
    if (x == n)
    {
        return true;
    }
    for (int i = 0; i < n; i++)
    {
        if (is_safe(arr, x, i, n))
        {
            arr[x][i] = 1;
            if (Nqueen(arr, n, x + 1))
            {
                return true;
            }
            arr[x][i] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    int x = 0;
    Nqueen(arr, n, x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}