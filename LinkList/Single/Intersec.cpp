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
void intersect(Node *&head1, Node *&head2, int x)
{
    Node *temp = head1;
    Node *Last = head2;
    while (temp->data != x)
    {
        temp = temp->next;
    }
    while (Last->next != NULL)
    {
        Last = Last->next;
    }
    Last->next = temp;
}
int length(Node *head)
{
    Node *len = head;
    int coun = 0;
    while (len != NULL)
    {
        coun++;
        len = len->next;
    }
    return coun;
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
    cout << "NULL" << endl;
}

Node *findinter(Node *&h1, Node *&h2)
{
    int d1 = length(h1);
    int d2 = length(h2);

    Node *L1 = NULL;
    Node *L2 = NULL;

    if (d1 > d2)
    {
        L1 = h1;
        L2 = h2;
    }
    else
    {
        L1 = h2;
        L2 = h1;
    }

    int d = abs(d1 - d2);

    while (d != 0)
    {
        L1 = L1->next;
        d--;
    }
    while (L1 != L2)
    {
        L1 = L1->next;
        L2 = L2->next;
    }
    return L1;
}
void del_head(Node *&head, int x)
{
    Node *del = head;
    head = head->next;
    delete del;
}
void del(Node *&head, int x)
{
    Node *temp = head;
    while (temp->next->data != x)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp = temp->next->next;
    delete del;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    append(head1, 1);
    append(head1, 2);
    append(head1, 3);
    append(head1, 4);
    append(head1, 5);
    append(head1, 6);
    append(head1, 7);
    append(head2, 10);
    append(head2, 11);
    append(head2, 12);
    intersect(head1, head2, 3);
    print(head1);
    print(head2);

    Node *i = findinter(head1, head2);
    cout << i->data;
}