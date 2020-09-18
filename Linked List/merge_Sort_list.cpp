/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAThead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *newNode = new node(d);
    newNode->next = head;
    head = newNode;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ->";
        head = head->next;
    }
}

node *take_input()
{
    int d;
    cin >> d;

    node *head = NULL;

    while (d != -1)
    {
        insertAThead(head, d);
        cin >> d;
    }
    return head;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os;
}
istream &operator>>(istream &is, node *&head)
{
    head = take_input();
    return is;
}

node *merge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}
node *midpoint(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *mergeSort(node *head)
{
    // base case
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    // recursive case
    // 1 . break

    node *mid = midpoint(head);
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    // mergethem
    node *c = merge(a, b);
    return c;
}

bool detectCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node *head;
    cin >> head;
    head = mergeSort(head);
    cout << head << endl;
}