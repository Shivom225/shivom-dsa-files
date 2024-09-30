#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
class Stack
{
public:
    Node *top;
    Node *head;
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    void push(Node *&head, int x)
    {
        Node *n = new Node(x);
        if (head == NULL)
        {
            head = n;
            top = n;
            return;
        }

        top->next = n;
        top = top->next;
    }
    void pop()
    {
        if (head == top)
        {
            delete head;
            return;
        }
        top = top->prev;
        delete top->next;
    }
    bool empty()
    {
        return head == NULL;
    }
    int topp()
    {
        if (head == NULL)
        {
            return -1;
        }
        return top->data;
    }
};
int main()
{
    Node *head = NULL;
    Stack st;
    st.push(head, 1);
    st.push(head, 2);
    st.push(head, 3);
    st.push(head, 4);
    st.pop();
    cout << st.topp();
    st.pop();
    cout << st.topp();
    //     while (!st.empty())
    //     {
    //         cout << st.topp() << endl;
    //         st.pop();
    //     }
    // }
}