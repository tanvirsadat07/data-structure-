#include<iostream>
using namespace std;

int power(int number,int p ){

if(p==0){

    
    return 1;
}

if(p==1){


    return number;
}

int cal=power(number,p/2);//a^b/2


if(p%2==0){

return  cal*cal;
    


}

else{
return number*cal*cal;

}

}

int main() {

int number=2;
int p=3;

int x=power(number,p);

cout<<x;



return 0;
}










