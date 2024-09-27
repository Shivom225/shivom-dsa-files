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
        n->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void push(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        n->next = head;
    }
    Node *temp = head;
    n->next = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    head = n;
    temp->next = head;
}
void del_head(Node *&head, int key)
{
    Node *del = head;
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
    delete del;
}
void del(Node *&head, int key)
{
    if (key == head->data)
    {
        del_head(head, key);
        return;
    }
    Node *del;
    Node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    del = temp->next;
    temp->next = del->next;
    temp = del;
    delete del;
}
void print(Node *head)
{
    Node *temp = head;
    cout << "Head->";
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "Null";
}

int main()
{
    Node *head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    del(head, 1);
    print(head);
}