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
void BFS(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " , ";
            q.pop();

            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}

int sumReplacement(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int leftsum = sumReplacement(root->left);
    int rightsum = sumReplacement(root->right);
    int temp = root->data;
    root->data = leftsum + rightsum;
    return temp + root->data;
}
int main()
{
    Node *root = buildTree();

    cout << "------------ bfs  tree ---------" << endl;
    BFS(root);
    cout << endl;
    sumReplacement(root);
    BFS(root);

    return 0;
}
