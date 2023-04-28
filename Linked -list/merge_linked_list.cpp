#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


// void solve(Node *head1, Node* head2 ){

// if(head1->data>head2->data){
//     merge_sorted_lists(head2,head1);

//    }
//    else{
//     merge_sorted_lists(head1,head2);
//    }
// }
Node* merge_sorted_lists(Node* head1, Node* head2) {
   
Node *end=head1;

    Node *current1=head1;
    Node* next1=current1->next;
    Node* currrent2=head2;
    while(current1->next&&currrent2){
        if((currrent2->data>current1->data)&&(currrent2->data<next1->data)){
            current1->next=currrent2;
            Node *next2=currrent2->next;
            currrent2->next=next1;
            current1=current1->next;
            currrent2=next2;


        }
        else{
            current1=current1->next;
            next1=next1->next;
            if(next1==NULL){
                current1->next=currrent2;
                return end ;
            }
        }
    }


return end;



}
  

     

void print_list(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head1 = new Node{1, new Node{3, new Node{5, nullptr}}};
    Node* head2 = new Node{2, new Node{4, new Node{6, nullptr}}};

    Node* merged_head = merge_sorted_lists(head1, head2);
    print_list(merged_head);

    return 0;
}