#include <bits/stdc++.h>
using namespace std;
int pre(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    return 0;
}
string intop(string str)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ans += str[i];
        }
        else if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && pre(st.top()) > pre(str[i]))
            {
                ans += str[i];
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
string rev(string str)
{
    string ans = "";
    for (int i = str.length(); i >= 0; i--)
    {
        ans += str[i];
    }
    return ans;
}
string intopre(string str)
{
    str = rev(str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            str[i] = ')';
        }
        else if (str[i] == ')')
        {
            str[i] = '(';
        }
    }
    str = intop(str);
    return rev(str);
}

int main()
{
    string str = "((a+b)-(c/d))";
    cout << intopre(str);
}