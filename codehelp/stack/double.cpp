#include <iostream>
using namespace std;

class Stack{
public:
    int *arr;

    int top1;
    int max;
    int size ;
    int top2;

    Stack(int max){
        this->max=max;
        arr=new int[max];
        top1=-1;
        
        size=0;
        top2=max;
    }

    void push1(int value){
        
        if(size==max){

            cout<<"no space"<<endl;;
            return;
        }

        top1++;
        arr[top1]=value;
        size++;

     

    }


     void push2(int value){
        
        if(size==max){

            cout<<"no space"<<endl;;
            return;
        }
        top2--;
        arr[top2]=value;
        size++;

     

    }




int pop1(){

        if(top1>=0){

            int ans =arr[top1];
            top1--;
            size--;

            return ans;
        }
        else{

            return -1;
        }
    }



    int pop2(){

        if(top2<max){


       
           
            int ans =arr[top2];
            top2++;

            return ans;
        }
        else{
            
            return -1;
        }
    }

int  peek1(){

if(top1>=0){
   return arr[top1];
}

else{

  return -1;
}
  
}


int  peek2(){

if(top2==max){
    return -1;
}

else{
  
  
    return arr[top2];
}
  
}


int sz() {

    return size ;
}

bool empty (){


if( top1==-1){

    return true;
}
else {

}
return false ;
}



};




int main(){

    Stack s (5);

  
    s.push1(0);
    s.push1(2);
    s.push1(3);
    s.push2(9);
      s.push2(19);
        s.push2(9);
    // s.push2(40);
    


       


 cout<<"peek1 -"<<s.peek1()<<endl;
  cout<< "peek2-"<<s.peek2()<<endl;


 cout<<"size - "<<s.sz()<<endl;
 cout<<"pop1 - "<<s.pop1()<<endl;
 cout<<"pop2 - "<<s.pop2()<<endl;


 return 0;
}
