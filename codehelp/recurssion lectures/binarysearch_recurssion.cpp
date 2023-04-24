#include<iostream>
using namespace std;


bool number(int arr[],int find,int start,int end){

if(start>end){


    return false;
}


int mid=(end-start)+start/2;


   if(arr[mid]==find){

    return true;
   }


   else if(find>arr[mid]){
     return  number(arr,3,mid+1,end);

     }

     else{

      return number(arr,3,start,mid-1);
    }


}



int main() {




int arr[]={1,2,3,10,11,22,33};

int end=sizeof(arr)/sizeof(arr[0]);


int start=0;
bool x=number(arr,11,start,end-1);
if(x){


cout<<"found";


}

else{


    cout<<"no";
}

return 0;
}










