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

void rightview(Node *root, int level, int &max_level)
{
    if (root == NULL)
    {
        return;
    }
    if (max_level < level)
    {
        cout << root->data << " ";
    }

    rightview(root->right, level + 1, max_level);
    rightview(root->left, level + 1, max_level);
}

int main()
{
    Node *root = buildTree();
    cout << root << endl;

    int max_level = -1;
    rightview(root, 0, max_level);
}