#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    int val;
    node* left;
    node* right;
    node* parent;
};

class Tree{
public:
    node *root;
    node *nodes[6];

    Tree(){
        root=NULL;
    }

    node* creat(int data, int value){
        node *n=new node ;
        n->id=data;
        n->val=value;
        n->left=NULL;
        n->parent=NULL;
        n->right=NULL;
        return n;
    }

    void insert(int data, int value){
        node *newnode=creat(data,value);

        if(root==NULL){
            root=newnode;
            return ;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node * a=q.front();
            q.pop();

            if(a->left!=NULL){
                q.push(a->left);
            }
            else{
                a->left=newnode;
                newnode->parent=a;
                return ;
            }

            if(a->right!=NULL){
                q.push(a->right);
            }
            else{
                a->right=newnode;
                newnode->parent=a;
                return ;
            }
        }
    }
    
    vector<int> Inorder(node *a){
        stack<node*>a1,b;
        vector<int>v;

        a1.push(a);
        if(a1.empty()){
            return v;
        }

        while (!a1.empty()){
            node *x=a1.top();
            a1.pop();
            b.push(x);
            if(x->left!=NULL){
                a1.push(x->left);
            }
            if(x->right!=NULL){
                a1.push(x->right);
            }
        }

        while(!b.empty()){
            v.push_back(b.top()->val);
            b.pop();
        }
    
        return v;
    }
};

int main() {
    Tree t;

    // insert some nodes
    t.insert(1, 1);
    t.insert(2, 2);
    t.insert(3, 3);
    t.insert(4, 4);
    t.insert(5, 5);
    t.insert(6, 12);
    t.insert(11, 82);

    vector<int> b =  t.Inorder(t.root);

    for (int j = 0; j < b.size(); j++) {
        cout << b[j]<< " ";
    }

    return 0;
}
