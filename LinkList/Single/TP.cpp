#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int n)
    {
        data = n;
        next = NULL;
    }
};

void append(node *&head, int n)
{
    node *new_node = new node(n);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void push(node *&head, int n)
{

    node *new_node = new node(n);
    new_node->next = head;
    head = new_node;
}

void deleathead(node *&head)
{
    node *delnode = head;
    head = delnode->next;
    delete delnode;
}

void del(node *&head, int d)
{

    node *temp = head;
    if (head == NULL)
    {
        return;
    }

    if (temp->next == NULL)
    {
        deleathead(head);
    }

    while (temp->next->data != d)
    {

        temp = temp->next;
    }
    node *delnode = temp->next;
    temp->next = delnode->next;
    delete delnode;
}

void display(node *head)
{
    node *temp = head;
    cout << "HEAD->";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

node *reverse(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void addcycle(node *&head, int d)
{
    node *temp = head;
    node *cycle;
    while (temp->next != NULL)
    {

        if (temp->data == d)
        {
            cycle = temp;
        }
        temp = temp->next;
    }
    temp->next = cycle;
}

bool DetectCycle(node *&head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

void removeCycle(node *&head)
{

    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (fast->next->data != slow->next->data)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
}

int main()
{

    node *head = NULL;
    push(head, 7);
    push(head, 8);
    push(head, 9);
    push(head, 10);
    push(head, 11);
    push(head, 12);

    append(head, 90);
    append(head, 91);
    append(head, 92);
    append(head, 93);

    display(head);
    addcycle(head, 90);
    // display(head);
    cout << DetectCycle(head) << endl;
    removeCycle(head);
    cout << DetectCycle(head);
}