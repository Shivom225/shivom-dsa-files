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

int main()
{
    Node *head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    print(head);
    cout << endl
         << length(head);
}