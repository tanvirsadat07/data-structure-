#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    node *n(int value)
    {
        node *x = new node;
        x->next = NULL;
        x->val = value;
        return x;
    }

    void insert_head(int val)
    {
        node *new_node = n(val);
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    void insert_index(int index, int data)
    {

        int index1 = 1;
        node *a = head;
        while (index1 < index - 1)
        {

            index1++;
            a = a->next;
        }
        node *next1 = a->next;
        node *x = n(data);
        a->next = x;
        x->next = next1;

        // cout<< index1<<endl;
    }

    void print()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    node*  rev(node*&h)
    {

        node *previus = NULL;

        node *current = h;

        while (current != NULL)
        {

            node *after = current->next;

            current->next = previus;
            previus = current;
            current = after;
        }
       
        return previus;
    }

    node * findMid(){

        node *slow=head;
        node*fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;

        }
        return slow;
    }

    bool isPalindrome() {
    node *left = head;
    node *mid = findMid();
    node *right = rev(mid->next);

    print();

    // while (left != NULL && right != NULL) {
    //     if (left->val != right->val) {
    //         return false;
    //     }
    //     left = left->next;
    //     right = right->next;
    // }

    // return true;
}

};

int main()
{
    LinkedList l;
    LinkedList l2;

 

   cout << ceil(5);
   
    return 0;
}
