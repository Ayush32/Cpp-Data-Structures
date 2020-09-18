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

node *reverseToK(node *head, int k)
{
}

int main()
{
    node *head = NULL;
    insertAThead(head, 5);
    insertAThead(head, 2);
    insertAThead(head, 6);
    insertAThead(head, 1);
    insertAThead(head, 4);
    insertAThead(head, 1);
    insertAThead(head, 1);
    print(head);

    cout << endl;

    // reverse(head);
    // print(head);
    // head = recRecursive(head);
    // print(head);
    int k;
    cin >> k;
    node *shead = reverseToK(head, k);
    print(shead);

    return 0;
}