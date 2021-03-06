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

node *midpoint(node *head)
{
    node *slow = head;
    node *prev = head;
    node *fast = head->next;
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    return head;
}

int main()
{
    node *head = NULL;
    insertAThead(head, 7);
    insertAThead(head, 6);
    insertAThead(head, 5);
    insertAThead(head, 4);
    insertAThead(head, 3);
    insertAThead(head, 2);
    insertAThead(head, 1);
    print(head);

    cout << endl;

    // reverse(head);
    // print(head);
    // head = recRecursive(head);
    // print(head);
    node *shead = midpoint(head);
    print(shead);

    return 0;
}