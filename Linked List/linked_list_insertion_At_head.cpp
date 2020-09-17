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

// passing a pointer by reference
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
//
int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtTail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertMiddle(node *&head, int data, int p)
{
    // corner case
    if (head == NULL)
    {
        insertAtTail(head, data);
        return;
    }
    else if (p > length(head))
    {
        insertAtTail(head, data);
    }
    else
    {
        // take p - 1 jumps;
        int jump = 1;
        node *temp = head;
        while (jump <= p - 1)
        {
            temp = temp->next;
            jump++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}
void deleteTail(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (key == head->data)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

// recursively
bool searchRecursive(node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->data == key)
    {
        return true;
    }
    else
    {
        return searchRecursive(head->next, key);
    }
}

// node *take_input(node *head)
// {
//     int d;
//     cin >> d;
//     node *head = NULL;
//     while (d != -1)
//     {
//         insertAThead(head, d);
//         cin >> d;
//     }
//     return head;
// }

int main()
{
    node *head = NULL;
    insertAThead(head, 3);
    insertAThead(head, 2);
    insertAThead(head, 1);
    insertAThead(head, 0);
    print(head);
    cout << endl;
    insertMiddle(head, 4, 3);
    insertAtTail(head, 7);
    deleteHead(head);

    print(head);
    cout << endl;
    deleteTail(head);
    print(head);
    reverse(head);
    print(head);

    int key;
    cin >> key;

    if (searchRecursive(head, key))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}