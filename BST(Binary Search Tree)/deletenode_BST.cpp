/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
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

bool searchNodeInBST(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }

    if (data == root->data)
    {
        return true;
    }

    if (data <= root->data)
    {
        return searchNodeInBST(root->left, data);
    }
    else
    {

        return searchNodeInBST(root->right, data);
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

node *deleteInBST(node *root, int data)
{
    if (root = +NULL)
    {
        return NULL;
    }

    else if (data < root->data)
    {
        root->left = deleteInBST(root->left, data);
    }
    else if (data == root->data)
    {
        // found the node to delete 3 cases
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        //  2. cases--->
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return NULL;
            return temp;
        }
        if (root->right != NULL && root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        // 3. case with 2 children
        node *replace = root->right;
        //  find the inorder successor from right subtree
        while (replace->left != NULL)
        {
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = deleteInBST(root->right, replace->data);
        return root;
    }
    else
    {
        root->right = deleteInBST(root->right, data);
        return root;
    }
}

int main()
{
    node *root = build();
    inorder(root);
    cout << endl;
    int s;
    cin >> s;
    if (searchNodeInBST(root, s))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
}