/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// accepts the old root ode and data and returns the new root node

node *insertInBST(node *root, int data)
{

    // base case
    if (root == NULL)
    {
        return new node(data);
    }

    // Rec case insert in subtree in left
    if (data <= root->data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *build()
{
    // read a list of numbers till - 1 and also these numbers will be inserted into BST
    int d;
    cin >> d;

    node *root = NULL;

    while (d != -1)
    {
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}

bool isBST(node *root, int minV = INT_MIN, int maxV = INT_MAX)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= minV && root->data <= maxV && isBST(root->left, minV, root->data) && isBST(root->right, root->data, maxV))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = build();
    inorder(root);
    cout << endl;
    int s;
    cin >> s;
    if (isBST(root))
    {
        cout << "yes it is BST" << endl;
    }
    else
    {
        cout << "Not BST" << endl;
    }
}