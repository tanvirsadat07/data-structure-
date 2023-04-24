#include <iostream>
using namespace std;



class Node{

    public:

        int data ;
        Node *next;


    Node(int data){

        this->data=data;
        this->next=NULL;
    }

};


void insert_at_head(Node *&head,int data){

   
   
   
    Node *a=new Node(data);


    a->next=head;
    head=a;



}


void insert_at_position(Node *& head , int data , int index){


if(index==0){

    return insert_at_head(head,data);
}



int i=0;

Node *a=head;
while(i<index-1){

    a=a->next;
    i++;
}

 Node *x=new Node(data);
 x->next=a->next;
 a->next=x;


}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}




void delete_at_head(Node*&head){
    
    if(head!=NULL){

    Node *a=head;

    Node* b=a->next;

    head=b;

    delete a;


    }




}


void del_index(Node*& head ,int index ){


if(index==0){

    delete_at_head(head);
}


Node *a=head;
int i=0;

while(i<index-1){

 a=a->next;
    i++;
}

Node *b=a->next;
Node *c=b->next;
a->next=c;
delete  b;








}




void reverse1(Node*& head){

    Node * previous=NULL;
    Node *current=head;
    Node *after=NULL;
    while(current!=NULL){
    after=current->next;
    current->next=previous;
    previous=current;
    current=after;

    }
    head=previous;


}



void print(Node *&head){
    Node *a=head;

    while(a!=NULL){

        cout<<a->data<<endl;

        a=a->next;


    }
    cout<<endl;




}


void reverse(Node*& head) {
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






int main(){


    Node* node1 = new Node(10);

    Node* head = node1; 
    Node * tail = node1;

  
   insert_at_head(head,10);
   insert_at_head(head,10);
     insert_at_head(head,120);
     insert_at_head(head,120);
    insert_at_head(head,3220);

 

 print(head);



cout<<"after reserve"<<endl;

reverse(head);
 print(head);


    return 0;
}
