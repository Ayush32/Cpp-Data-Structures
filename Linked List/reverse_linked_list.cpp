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

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ->";
        head = head->next;
    }
}

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

void reverse(node *&head)
{
    node *current = head;
    node *prev = NULL;
    node *N;

    while (current != NULL)
    {
        N = current->next;

        current->next = prev;

        prev = current;
        current = N;
    }
    head = prev;
}

node *recRecursive(node *head)
{
    // smallest linked list

    if (head->next == NULL or head == NULL)
    {
        return head;
    }
    //  rec case
    node *shead = recRecursive(head->next);

    node *temp = head->next;

    head->next = NULL;
    temp->next = head;
    return shead;
}

int main()
{
    node *head = NULL;
    insertAThead(head, 3);
    insertAThead(head, 2);
    insertAThead(head, 1);
    insertAThead(head, 0);
    print(head);

    cout << endl;

    // reverse(head);
    // print(head);
    head = recRecursive(head);
    print(head);

    return 0;
}