#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Is Full";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Empty";
            return;
        }
        top--;
    }
    bool empty()
    {
        return top == -1;
    }
    int topp()
    {
        return arr[top];
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while (!st.empty())
    {
        cout << st.topp();
        st.pop();
    }
}