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

    void insert_index(int index, int data ){

        int index1=1;
        node*a =head;
        while(index1<index-1){

          
            index1++;
             a=a->next;

        }
         node *next1=a->next;
        node * x=n (data);
        a->next=x;
        x->next=next1;


       // cout<< index1<<endl;

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
    LinkedList l2;
   
   l. insert_head(10);
  
    l. insert_head(20);
     l. insert_head(20);
      l. insert_head(20);
    l.insert_index(3,30);
  // l.rev();
    l.print();
    return 0;
}