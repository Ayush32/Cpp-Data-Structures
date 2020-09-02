/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
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

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInputBetter()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    int count = 0;
    Node *temp = head;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    /* Node * a = temp -> next; 
     temp->next = newNode;
     newNode -> next =  a;
     */
    if (temp != NULL)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

void deleteNode(int )

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << " -> ";
    //     temp = temp->next;
    // }
}

int main()
{
    Node *head = takeInputBetter();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
}