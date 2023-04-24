#include <iostream>
#include <string>

using namespace std;
int fib(int number){

    if(number==1){
        return 1;
    }

    if(number==0){
        return 0;
    }

    return fib(number-2)+fib(number-1);
    



}



int main(){

   
 
int w =fib(8);
cout<<w;


 return 0;
}
