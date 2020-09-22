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

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSubtree = height(root->left);
    int rightSubtree = height(root->right);
    return max(leftSubtree, rightSubtree) + 1;
}

int main()
{
    Node *root = buildTree();
    cout << "-------------Indorder Printing Tree---------" << endl;
    printInOrder(root);
    cout << endl;
    cout << "Height of tree-> " << height(root);

    return 0;
}
