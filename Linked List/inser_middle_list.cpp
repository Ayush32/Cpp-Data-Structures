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

int main()
{
    node *head = NULL;
    insertAThead(head, 3);
    insertAThead(head, 2);
    insertAThead(head, 1);
    insertAThead(head, 0);

    print(head);

    return 0;
}