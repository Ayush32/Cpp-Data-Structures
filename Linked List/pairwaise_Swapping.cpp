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

node *pairSwapping(node *head)
{
    if (head == NULL)
    {
        return head;
    }
    node *temp = head;

    while (temp != NULL and temp->next != NULL)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
    return head;
}

int main()
{
    node *head;
    cin >> head;
    head = pairSwapping(head);
    cout << head << endl;
}