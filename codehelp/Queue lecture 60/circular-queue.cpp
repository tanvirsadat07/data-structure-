#include <iostream>
using namespace std;

const int maxsize=10;


class Queue{

   
public:
    int arr[maxsize];

    int left ;
    int right;
    int sz;

    Queue(){

            left=0;
            right=-1;
            sz=0;

    }

    void  enque(int data){

        if(sz==maxsize){
            cout<<"fulll queue"<<endl;
            return;

        }

        right++;
        if(right==maxsize){

            right=0;
        }
        arr[right]=data;
        sz++;

    }

void front(){

    if(sz==0){

        cout<<"empty";
        return;
    }

    cout<<arr[left]<<endl;


}
   
void deque(){

        if(sz==0){
            cout<<"nothing is here "<<endl;
            return;
        }
        left++;
        if(left==maxsize){//here if left ==last element then circle back and strat from 0;

            left=0;
        }
      
       sz--;

}

void size(){

cout<<"size"<<sz<<endl;
}


};





int main(){

    Queue q;

    q. enque(1);
    q. enque(2);
    q. enque(3);
    q. enque(4);
    
    q.front();
    q.deque();
    q.front();
    q.deque();
    q.front();
    q.deque();
    q.front();
    q.deque();
  
 
 

   

   

    return 0;
}