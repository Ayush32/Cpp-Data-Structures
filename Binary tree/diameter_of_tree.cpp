/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
#include <queue>
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

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2;

    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1, max(op2, op3));
}

int main()
{
    Node *root = buildTree();
    cout << "------------ Diameter of tree ---------" << endl;

    cout << diameter(root);

    return 0;
}
