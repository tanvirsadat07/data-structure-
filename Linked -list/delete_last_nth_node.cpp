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
void del_nth_node_from_end(int number){

size--;
    node *dummy=n(-1);// make a dummy node which will bne before the head ;
    dummy->next=head;
    node* slow=dummy;
    node* fast=dummy;

    for(int i=0;i<number ;i++){
        fast=fast->next;
    }
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;

    head=dummy->next;



}
//solution-2
void del_nth_node_from_end_2(int number){

int move=sz()-number;
node* dummy=n(-1);
dummy->next=head;

node *point=dummy;



    for(int i=0 ; i<move;i++){
        point=point->next;


    }
    point->next=point->next->next;

    head=dummy->next;

}
};


int main(){
    LinkedList l;
   
   l. insert_head(10);
    l. insert_head(20);
     l. insert_head(30);

    l.del_nth_node_from_end_2(1);
    

   l.print();
   cout<<l.sz();
    return 0;
}