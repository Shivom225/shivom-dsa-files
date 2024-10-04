#include <bits/stdc++.h>
using namespace std;
int largestRectinHisto(int arr[], int n)
{
    int ns[n], ps[n];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ps[i] = -1;
        }
        else
        {
            ps[i] = st.top();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ns[i] = n;
        }
        else
        {
            ns[i] = st.top();
        }
        st.push(i);
    }
    int maxarr = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int area = ((ns[i] - ps[i] - 1) * arr[i]);
        maxarr = max(area, maxarr);
    }
    return maxarr;
}
int main()
{
    int n = 9;
    int arr[n] = {4, 2, 8, 4, 8, 6, 4, 7, 3};
    cout << largestRectinHisto(arr, n);
}