// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int arr[]={1,2,3,4};
    
    
   
 
    int size=sizeof(arr)/sizeof(arr[0]);
      int s=0,e=size-1;

 
   while(s<=e){


    swap(arr[s],arr[e]);
    s++;
    e--;
   }

   
        

   


   
    for(int i=0;i<size;i++){

           cout<<arr[i]<<" ";  
    }
        
        
    
    
    return 0;
}