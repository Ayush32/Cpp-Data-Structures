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

void printKthLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
    return;
}

void printAllLevel(Node *root)
{
    int h = height(root);

    for (int i = 0; i <= h; i++)
    {
        printKthLevel(root, i);
        cout << endl;
    }
}

int main()
{
    Node *root = buildTree();

    cout << "Height of tree-> " << height(root);
    cout << endl;
    cout << "-------------Level Order Printing Tree---------";

    printAllLevel(root);

    return 0;
}
