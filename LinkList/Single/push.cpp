#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void push(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}
void print(Node *head)
{
    Node *temp = head;
    cout << "Head->";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    push(head, 1);
    push(head, 2);
    print(head);
}