#include <iostream>
using namespace std;
 const int size=10000;


class Queue{

   
public:
    int arr[size];

    int left ;
    int right;

    Queue(){

            left=0;
            right=-1;

    }

    void  enque(int data){

        if(right>size){
            cout<<"fulll queue";
            return;

        }
        right++;
        arr[right]=data;

    }

void front(){

    if(left>right){

        cout<<"empty";
        return;
    }

    cout<<arr[left];


}
   
void deque(){

        if(left>right){
            cout<<"nothing is here ";
            return;
        }
        left++;




}


void print(){

    if(left>right){

        cout<<"empty"<<endl;
        return;
    }
    for(int i=left;i<=right;i++){

        cout<<arr[i]<<endl;
    }
}



void size1(){




   int x=right-left+1;


   cout<<x<<endl;
}


};





int main(){

    Queue q;

   q. enque(10);

    q. enque(20);
    q.deque();

    q.deque();
   q.print();
   q.size1();

   

   

    return 0;
}