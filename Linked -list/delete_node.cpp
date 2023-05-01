

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
   
    int val;
    node *next;
   

  
};

class LinkedList{
    public:
    node * head;
    int size;

    LinkedList(){
        head=NULL;
        size=0;
    }
    

    node *n(int value){
        node *x=new node;
        x->next=NULL;
        x->val=value;
        return x;
    }
    
    void insert_head(int val) {
    node *new_node = n(val);
    size++;
        if(head==NULL){
          head =new_node;
        }
       else{
        new_node->next = head;
        head = new_node;
       }
    }

    int sz(){
        return size;
    }

   void print() {
        node *current = head;
        while (current != NULL) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

//function to get reference of the node to delete
node* getNode(int value) {
    node *h=head;

    while(h->val != value)
    { h = h->next;
    }
    
    return h;
}
//delete function as per the question
void deleteNode(node* t) {
    t->val= t->next->val;
    t->next = t->next->next;
    
}
};


int main(){
    LinkedList l;
   
   l. insert_head(10);
    l. insert_head(20);
     l. insert_head(30);
       l. insert_head(30);


     node*g=l.getNode(30);

    l.deleteNode(g);

   
    

   l.print();
  
    return 0;
}