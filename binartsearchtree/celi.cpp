#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    
    int val;
    node *left;
    node *right;
    node *parent;
};

class Binarytree
{

public:
    node *root;
    Binarytree()
    {
        root = NULL;
    }

    node *create(int value)
    {

        node *a = new node;
       
        a->val = value;
        a->left = NULL;
        a->parent = NULL;
        a->right = NULL;
        return a;
    }

    void insert(int value)
    {

        node *a = create(value);

        if (root == NULL)
        {
            root = a;
            return;
        }
        node *current = root;
        node *prev = NULL;
        while (current != NULL)
        {

            if (a->val > current->val)
            {
                prev = current;
                current = current->right;
            }
            else
            {
                prev = current;
                current = current->left;
            }
        }

        if (a->val > prev->val)
        {
            prev->right = a;
            a->parent = prev;
        }
        else
        {
            prev->left = a;
            a->parent = prev;
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
                l = a->left->val;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->val;
                q.push(a->right);
            }

            if (a->parent != NULL)
            {
                p = a->parent->val;
            }

            cout<< " value=" << a->val << " parent = " << p << " left= " << l << " right= " << r << endl;
        }
    }

    int celi(int value){
        int cel=-1;

        while(root!=NULL){
            if(root->val==value){
                cel=root->val;
                return cel ;
            }
            else if(value>root->val){
                root=root->right;
            }
            else{
                cel=root->val;
                root=root->left;

            }
        }
        return cel;
    }
};
int main()
{
    Binarytree t;

    t.insert(10);
    t.insert(5);
    t.insert(13);
    t.insert(11);
    t.insert(14);
    t.insert(9);
    
    t.BFS();
    cout<<t.celi(8);
 

    return 0;
}