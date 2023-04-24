#include <iostream>
using namespace std;


template<class T>
class Stack{
public:
    T *arr;
    int top;
    int stack_size;
    int array_capacity;

    Stack(){
        arr=new int[1];
        top=-1;
        stack_size=0;

        
    }



void increase_size(){

    
}
    void push(int value){
        
        if(x==max){

            cout<<"no space"<<endl;;
            return;
        }

        top++;
        arr[top]=value;
        x++;

     

    }

int  peek(){

if(top==-1){
    return -1;
}

else{

    return arr[top];
}
  
}


bool empty (){


if( top==-1){

    return true;
}
else {

}
return false ;
}



};




int main(){

    Stack s (5);

    s.push(10);
    s.push(10);

    s.push(10);

    s.push(10);

    s.push(10);
     s.push(10);



 //int x= s.peek();
 cout<< s.peek();



 return 0;
}
