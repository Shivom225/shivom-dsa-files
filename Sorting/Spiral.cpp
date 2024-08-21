#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5] =
        {
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20},
            {21, 22, 23, 24, 25},
            {26, 27, 28, 29, 30},
            {31, 32, 33, 34, 35}};

    int rs = 0, re = 4, cs = 0, ce = 4;
    while (rs <= re && cs <= ce)
    {
        for (int i = rs; i <= ce; i++)
        {
            cout << arr[rs][i] << " ";
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            cout << arr[i][ce] << " ";
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            cout << arr[re][i] << " ";
        }
        re--;
        for (int i = re; i >= rs; i--)
        {
            cout << arr[i][cs] << " ";
        }
        cs++;
    }
}
