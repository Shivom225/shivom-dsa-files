#include <bits/stdc++.h>
using namespace std;

string p1;
string p2;
int counter = 0;
char mark;
char game[3][3] = {{'1', '2', '3'},
                   {'4', '5', '6'},
                   {'7', '8', '9'}};

void display()
{
    cout << " -------------" << endl;
    cout << " | " << game[0][0] << " | " << game[0][1] << " | " << game[0][2] << " | " << endl;
    cout << " -------------" << endl;
    cout << " | " << game[1][0] << " | " << game[1][1] << " | " << game[1][2] << " | " << endl;
    cout << " -------------" << endl;
    cout << " | " << game[2][0] << " | " << game[2][1] << " | " << game[2][2] << " | " << endl;
    cout << " -------------" << endl;
}
void tick(int n, char mark)
{
    switch (n)
    {
    case 1:
        if (game[0][0] == '1')
        {
            game[0][0] = mark;
            counter++;
        }
        break;
    case 2:
        if (game[0][1] == '2')
        {
            game[0][1] = mark;
            counter++;
        }
        break;
    case 3:
        if (game[0][2] == '3')
        {
            game[0][2] = mark;
            counter++;
        }
        break;
    case 4:
        if (game[1][0] == '4')
        {
            game[1][0] = mark;
            counter++;
        }
        break;
    case 5:
        if (game[1][1] == '5')
        {
            game[1][1] = mark;
            counter++;
        }
        break;
    case 6:
        if (game[1][2] == '6')
        {
            game[1][2] = mark;
            counter++;
        }
        break;
    case 7:
        if (game[2][0] == '7')
        {
            game[2][0] = mark;
            counter++;
        }
        break;
    case 8:
        if (game[2][1] == '8')
        {
            game[2][1] = mark;
            counter++;
        }
        break;
    case 9:
        if (game[2][2] == '9')
        {
            game[2][2] = mark;
            counter++;
        }
        break;
    }
}
void cheack()
{

    cout << "Checking";

    if (game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X') // 1
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    if (game[0][0] == 'O' && game[0][1] == 'O' && game[0][2] == 'O') // 1
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X') // 2
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[2][0] == game[2][1] == game[2][2]) // 3
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[0][0] == game[1][0] == game[2][0]) // 4
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[0][1] == game[1][1] == game[2][1]) // 5
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[0][2] == game[1][2] == game[2][2]) // 6
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[0][0] == game[1][1] == game[2][2]) // 7
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    else if (game[2][0] == game[1][1] == game[0][1]) // 8
    {
        if (counter % 2 != 0)
        {
            cout << p1 << "--Wins--";
        }
        else
        {
            cout << p2 << "--Wins--";
        }
        return;
    }
    return;
}
int main()
{
    cout << "----Tik-Tac-Toe----";
    cout << "\n";
    cout << "\n";
    cout << "Enter The Player 1 Name" << "\n";
    cin >> p1;
    cout << "\n";
    cout << "Enter The Player 2 Name" << "\n";
    cin >> p2;
    cout << "\n";
    cout << "\n";
    cout << "Press Any Key To Start" << "\n";
    char ch;
    cin >> ch;
    // system("cls");
    while (counter < 9)
    {
        // system("cls");
        display();
        int inp;
        if (counter % 2 == 0)
        {
            cout << p1 << "'s Chance(O)" << "\n";
            cin >> inp;
            tick(inp, 'O');
        }
        else
        {
            cout << p2 << "'s Chance(X)" << "\n";
            cin >> inp;
            tick(inp, 'X');
        }
        cheack();
    }
}
