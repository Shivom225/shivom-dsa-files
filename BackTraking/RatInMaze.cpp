#include <bits/stdc++.h>
using namespace std;

bool is_safe(int **maze, int x, int y, int n)
{
    if (x < n && y < n && maze[x][y] == 0)
    {
        return true;
    }
    return false;
}

bool rat_in_maze(int **maze, int **sol, int x, int y, int n)
{
    if (x == n - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        return true;
    }
    if (is_safe(maze, x, y, n))
    {
        sol[x][y] = 1;
        if (rat_in_maze(maze, sol, x + 1, y, n))
        {
            return true;
            ;
        }
        if (rat_in_maze(maze, sol, x, y + 1, n))
        {
            return true;
        }
        sol[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **maze = new int *[n];
    for (int i = 0; i < n; i++)
    {
        maze[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int **sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sol[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sol[i][j] = 0;
        }
    }
    cout << endl;
    int x, y;
    cout << "Place Rat" << " = ";
    cin >> x >> y;
    rat_in_maze(maze, sol, x, y, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}