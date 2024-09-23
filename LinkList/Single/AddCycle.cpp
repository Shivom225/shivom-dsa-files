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
void append(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
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
    cout << "NULL";
}
void AddCycle(Node *&head, int x)
{
    Node *temp = head;
    Node *a;
    while (temp->next != NULL)
    {
        if (temp->data == x)
        {
            a = temp;
        }
        temp = temp->next;
    }
    temp->next = a;
}

bool DetectCycle(Node *&head)
{
    Node *s = head;
    Node *f = head;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    Node *head = NULL;
    append(head, 2);
    append(head, 1);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    AddCycle(head, 4);
    // print(head);
    cout << DetectCycle(head);
}