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
            while (!st.empty() && pre(st.top()) >= pre(str[i]))
            {
                ans += st.top();
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

int main()
{
    string str = "((a+b)-(c/d))";
    cout << intop(str);
}
