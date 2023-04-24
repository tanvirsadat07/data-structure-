#include <iostream>
using namespace std;



class Node {
public:

    Node * next ;
    Node * prev;
    int data ;

};
    class Dequeue{

        public:

        Node *head;
        Node *tail;
        int size;

        Dequeue(){
            head=NULL;
            tail=NULL;
            size=0;
        }

        Node *a(int data){

            Node *x=new Node;
            x->data=data;
            x->next=NULL;
            x->prev=NULL;
            return x;
        }


void push_front (int data ){
 Node *new_= a(data);

    if( head==NULL){

       head=new_; 
       tail=new_;
       size++;
    }

else
{
        Node *a = head;

        a->prev=new_;
        new_->next=a;
        head=new_;
        size++;
}


}


void print( ){


if( head==NULL){


    cout<<"this is empty";
    return ;
}
    Node *x=head;


    while(x!=NULL){

        cout<<x->data<<endl;
        x=x->next;

    }

}



void  push_back (int data){

    Node *x = a(data);

    if(tail==NULL){
       
        tail=x;
        head=x;
        size++;
        return ;
    }
  
  Node * t=tail;

  t->next=x;
  x->prev=t;
  tail=x;
  size++;

}

void pop_back(){

    

    if(size==0){

        cout<<"Empty";
        return ; 

    }

    else if(size==1){
        delete tail ;
        head=NULL;
        tail=NULL;
        size--;
        return ;
        


    }
    Node * t=tail;
    Node *last =t->prev;
    tail=last;
    delete t ;
    tail->next=NULL;
    size--;




}
void  pop_front(){

if(size==0){

        cout<<"Empty";
        return ; 

    }

    else if(size==1){
        delete head;
        head=NULL;
        tail=NULL;
        size--;
        return ;
  
    }



    Node * a=head ;
    Node *b=head->next ;
    b->prev=NULL;
    head=b ;
    delete a;
    size--;




}



void reverse() {
    Node *previous = NULL;
    Node *current = head;
    Node *forward = NULL;

    while (current != NULL) {
        // Save the next node in the list
        forward = current->next;
        // Reverse the link to the previous node
        current->next = previous;
        // Move to the next node in the list
        previous = current;
        current = forward;
    }

    // Set the head of the list to the last node visited
    head = previous;
}



void sz(){

   cout<< size<<endl;
}



    };
    






int main (){

Dequeue d;


  d.push_front(0);
  d.push_front(0);
  d.push_back(19);
  d.push_back(19);

 
  
  d.pop_front();
  d.pop_front();
  d.pop_front();
  d.pop_back();
  
  
  
  
  

 
  
 

  d.print();

   //d.sz();
  
    
}