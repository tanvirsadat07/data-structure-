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


node*  mid(){
    int count=0;
    node *a=head;

    while(a!=NULL){
        count++;
        a=a->next;
    }
   int  mid=count/2;
   node * b=head;
     for(int i=0;i<mid;i++){
        b=b->next;

     }
     return b;


}
   
node*  mid2(){
   
    node *slow=head;
    node  * fast=head ;

   while (fast&&fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;

    }
 

     
     return slow;


}

void rev(){

node * prex=NULL;
node * current=head;


while(current){
    node *after=current->next;
    current->next=prex;
    prex=current;
    current=after;




}
head=prex;

}
};




int main(){
    LinkedList l;
   
   l. insert_head(10);
    l. insert_head(20);
    l. insert_head(30);
     l. insert_head(40);
      l. insert_head(50);
   node *x=l.mid2();
   cout<<x->val;


  // l.print();
    return 0;
}