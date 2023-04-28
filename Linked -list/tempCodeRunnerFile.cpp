#include <bits/stdc++.h>
using namespace std;

class node
{
public:
   
    int val;
    node *next;
   

    // node(int value){
    //     val=value;
    //     next=NULL;
    // }

};

class LinkedList{
    public:
    node * head;

    LinkedList(){
        head=NULL;
    }

    node *n(int value){
        node *x=new node;
        x->next=NULL;
        x->val=value;
        return x;
    }
    
    void insert_head(int val) {
    node *new_node = n(val);
        if(head==NULL){
          head =new_node;
        }
       else{
        new_node->next = head;
        head = new_node;
       }
    }

    

   void print() {
        node *current = head;
        while (current != NULL) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }


void rev(){

    node * previus=NULL;
 
    node *current=head;
    

    while(current!=NULL){

        node *after=current->next;

        current->next=previus;
        previus=current;
        current=after;
        

    }
    head=previus;
}
   

};




int main(){
    LinkedList l;
   
   l. insert_head(10);
    l. insert_head(20);
   l.rev();
    l.print();
    return 0;
}