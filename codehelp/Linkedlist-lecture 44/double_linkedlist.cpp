#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* pre;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->pre = NULL;
        this->next = NULL;
    }

};
void insert(int data, Node *&head){
        
        Node *new_ = new Node(data);
        
        
        if(head==NULL){
            head=new_;
            return;
        }
             
        Node *a=head;

        new_->next=a;
        a->pre=new_->next;
        head=new_;
        
    }


void del_athead(Node *& head){


    Node*a=head;
    Node*b;

    b=a->next;
    head=b;
    delete a;
}


void del_at_position(Node *& head, int index ) {


    if(index==0){

        return del_athead(head);
    }

        int i=0;
        Node *a=head;

        while(i<index-1){

            a=a->next;
            i++;

        }

        Node *b=a->next;
        Node *c=b->next;
        a->next=c;
        
        
       
        delete b;



}
void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> pre = tail;
        tail = temp;
    }

}

void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}




int main (){

      Node *node1=new Node(1);
      Node *head=node1;
      Node *tail=node1;


        insert(10,head);
         insert(20,head);
           insert(20,head);


      
      print(head);
    
        // del_athead(head);
        del_at_position(head,1);
        del_athead(head);
       
        del_athead(head);
     insertAtTail(tail,head, 11);
        
            print(head);



   

     return 0;
}


   
