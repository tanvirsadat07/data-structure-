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

    // void tree(){

    //     for(int i=0;i<6;i++){
    //         nodes[i]=creat(i);
    //     }
    //     nodes[0]->left=nodes[1];
    //     nodes[0]->right=nodes[2];

    //     nodes[1]->parent=nodes[0];
    //     nodes[1]->left=nodes[5];

    //     nodes[2]->parent=nodes[0];
    //     nodes[2]->left=nodes[3];
    //     nodes[2]->right=nodes[4];

    //     nodes[3]->parent=nodes[2];
    //     nodes[4]->parent=nodes[2];

    //     nodes[5]->parent=nodes[1];

    //     root=nodes[0];

    // }

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

    void BFS()
    {
        queue<node *> q;

        q.push(root);
        while (!q.empty())
        {
            int l = -1, r = -1, p = -1;
            node *a = q.front();

            q.pop();

            if (a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }

            if (a->parent != NULL)
            {
                p = a->parent->id;
            }

            cout << "Node " << a->id << " value=" << a->val << " parent = " << p << " left= " << l << " right= " << r << endl;
        }
    }

    void search(node *a, int value)
    {
        if (a == NULL)
        {
            return;
        }
        if (a->val == value)
        {

            cout << "node no ==" << a->id << endl;
        }
        search(a->left, value);
        search(a->right, value);
    }

    int height(node *a)
    {

        if (a == NULL)
        {

            return 0;
        }

        int l = height(a->left);

        int r = height(a->right);
        return 1 + max(l, r);
    }

    vector<vector<int>> levelOrder(node *root)
    {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans1;

            for (int i = 0; i < size; i++)
            {
                node *temp = q.front();
                ans1.push_back(temp->val);
                q.pop();

                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
            ans.push_back(ans1);
        }

        return ans;
    }

    void Inorder(node *a)
    {

        if (a == NULL)
        {

            return;
        }

        Inorder(a->left); // so this is left +root+right
        cout << a->id << " ";
        Inorder(a->right);
    }
    void preorder(node *a)
    {

        if (a == NULL)
        {

            return;
        }

        preorder(a->left);

        preorder(a->right);
        cout << a->id << " ";
    }
    void postorder(node *a)
    {

        if (a == NULL)
        {
            return;
        }

        postorder(a->left);
        postorder(a->right);
        cout << a->val << " ";
    }
};

int main()
{
    Tree t;

    t.insert(1, 1);
    t.insert(2, 2);
    t.insert(3, 3);
    t.insert(4, 4);
    t.insert(5, 5);
    t.insert(6, 6);

    // print the tree in BFS order
    vector<vector<int>> bfs = t.levelOrder(t.root);
    cout << "BFS order: ";
    for (int i = 0; i < bfs.size(); i++)
    {
        for (int j = 0; j < bfs[i].size(); j++)
        {
            cout << bfs[i][j] << " ";
        }
    }
    cout << endl;
    t.postorder(t.root);

    return 0;
}
