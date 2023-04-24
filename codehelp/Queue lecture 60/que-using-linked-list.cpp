#include<iostream>
using namespace std;


class Node {
public:
    Node * next ; 
    int data ;
   




    Node(int data){

        this-> data =data;
        this-> next=NULL;
        

    }




};

void enque(Node *& head ,int data, Node *& tail){


   
if ( head ==NULL){

   head->data=data;

   
}
 Node *a =new Node (data);

  

   Node *b=tail;
   b->next=a;
   tail=a;
   



}

void print (Node*& head ){

Node *a=head;

if(head==NULL){

    cout<<"empty node";
}

    while(a!=NULL){


        cout<<a->data<<endl;
        a=a->next;
    }


}


void  front (Node *& head){

    cout<<head->data;


}



void deque(Node *&head ){


    Node *a=head ;

    Node *b=head->next;

    head=b;
    delete a;







}

int main(){


  Node * a=new Node(10);

  Node *head=a ;
  Node* tail=a;

  enque(head,20,tail);
  enque(head,20,tail);
  enque(head,20,tail);
  deque(head);
  deque(head);
  deque(head);
  

  print(head);



  



 
}
