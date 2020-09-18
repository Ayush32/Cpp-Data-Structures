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

node *removeDuplicates(node *head)
{
    if (head == NULL)
    {
        return head;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    node *head = NULL;
    insertAThead(head, 1);
    insertAThead(head, 1);
    insertAThead(head, 1);
    insertAThead(head, 1);
    insertAThead(head, 1);
    insertAThead(head, 1);
    insertAThead(head, 1);
    print(head);

    cout << endl;

    // reverse(head);
    // print(head);
    // head = recRecursive(head);
    // print(head);
    node *shead = removeDuplicates(head);
    print(shead);

    return 0;
}