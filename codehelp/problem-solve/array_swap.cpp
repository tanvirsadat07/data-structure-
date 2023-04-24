// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int arr[]={1,2,3,4,1};
    
    
   
   int i,j;
    int size=sizeof(arr)/sizeof(arr[0]);

    //cout<<size;
    
    for(i=0;i<size;i=i+2){
       
    
           if(i+1<size){
                swap(arr[i],arr[i+1]);
            
           }
       

    }


   
    for(i=0;i<size;i++){

           cout<<arr[i]<<" ";  
    }
        
        
    
    
    return 0;
}