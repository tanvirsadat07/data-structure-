#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    int val;
    node *left;
    node *right;
    node *parent;
};

class Tree
{
public:
    node *root;
    node *nodes[6];

    Tree()
    {
        root = NULL;
    }

    node *creat(int data, int value)
    {
        node *n = new node;
        n->id = data;
        n->val = value;
        n->left = NULL;
        n->parent = NULL;
        n->right = NULL;
        return n;
    }

    void insert(int data, int value)
    {
        node *newnode = creat(data, value);

        if (root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }

            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    int balanced(node *root)
    {

        if (root == NULL)
        {
            return 0;
        }
        int left = balanced(root->left);
        int right = balanced(root->right);
        if (left == -1 || right == -1)
            return -1;
        if (abs(left - right) > 1)
            return -1;
        return max(left, right) + 1;
    }
    int diameter(node *root, int &length)
    {

        if (root == NULL)
        {
            return 0;
        }

        int l = diameter(root->right, length);
        int r = diameter(root->left, length);

        length = max(l + r, length);
        return max(l, r) + 1;
    }

    int diameterOfBinaryTree(node *root)
    {
        int d = 0;
        diameter(root, d);
        return d;
    }
};

int main()
{
    Tree t;

    // insert some nodes
    t.insert(1, 1);
    t.insert(2, 2);
    t.insert(3, 3);
    t.insert(4, 4);
    t.insert(5, 5);
    t.insert(6, 12);
    t.insert(7, 12);

    cout << t.diameterOfBinaryTree(t.root);

    return 0;
}
