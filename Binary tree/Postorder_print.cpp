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
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

// preorder printing

void printPostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printPostOrder(root->left);
    cout << root->data << " ";
    printPostOrder(root->right);
}

int main()
{
    Node *root = buildTree();
    cout << "-------------Post Order Printing Tree---------" << endl;
    printPostOrder(root);
    return 0;
}
