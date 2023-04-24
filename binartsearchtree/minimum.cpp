//https://1drv.ms/u/s!Ak15fhX_gM1xgQQBuTHSWfKZtwht
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
        // a->id=number;
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

    bool search(int value)
    {

        node *current = root;

        while (current != NULL)
        {
            if (current->val < value)
            {
                current = current->right;
            }
            else if (current->val > value)
            {
                current = current->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

    void del(int value)
    {

        node *current = root;
        node *prev = NULL;
        while (current != NULL)
        {

            if (value > current->val)
            {
                prev = current;
                current = current->right;
            }
            else if (value < current->val)
            {
                prev = current;
                current = current->left;
            }
            else
            {
                break;
            }
        }
        if (current->left == NULL && current->right == NULL)
        {
            if (prev->left == current)
            {
                prev->left = NULL;
            }
            else
            {
                prev->right = NULL;
            }
          
              delete current;
            return;
        }
        if (current->left == NULL && current->right != NULL)
        {
            if (prev->left == current)
            {
                prev->left = current->right;
            }
            else
            {
                prev->right = current->right;
            }
            delete current;
            return;
        }

        if (current->left == NULL && current->right != NULL)
        {
            if (prev->left == current)
            {
                prev->left = current->right;
            }
            else
            {
                prev->right = current->right;
            }
            delete current;
            return;
        }

        if(current->left!=NULL&&current->right!=NULL){
            node *goleft=current->right;
            while(goleft->left!=NULL){
                goleft=goleft->left;
            }
            int solv=goleft->val;
            del(solv);// the value is passed to delete this node
            current->val=solv;
        }
    }




};
int main()
{
    Binarytree t;

    t.insert(6);
    t.insert(4);
    t.insert(7);
    t.insert(3);
    t.insert(5);
    t.insert(8);
    
    t.BFS();
    // bool x=t.search(6);
    // if(x){
    //     cout<<"ok";

    // }else{
    //     cout<< "no";

    // }
   t.del(6);
    cout << endl;
    t.BFS();

    return 0;
}