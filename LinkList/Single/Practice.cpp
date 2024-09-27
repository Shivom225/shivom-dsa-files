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
    n->prev = temp;
}
void push(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = n;
    temp->next = head;
    head->prev = temp;
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
    cout << "NULL";
}
Node *search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
void del_head(Node *&head, int x)
{
    Node *del = head;
    del = head->next;
    head->prev = NULL;
    delete del;
}
void del(Node *&head, int x)
{
    if (x == head->data)
    {
        del_head(head, x);
    }
    Node *temp = head;
    while (temp->data != x)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}
int main()
{
    Node *head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    push(head, 0);
    print(search(head, 3));
    cout << endl;
    print(head);
}