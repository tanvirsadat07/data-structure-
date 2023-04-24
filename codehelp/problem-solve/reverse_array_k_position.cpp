// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6};

    int arr2[6]={0};
    
    
   int i , k=4,j=0;
 
    int size=sizeof(arr)/sizeof(arr[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
      

 for(i=size-k;i<size;i++){

    arr2[j]=arr[i];
    j++;
 }
   
   
   for(i=0;i<size-k;i++){

    arr2[j]=arr[i];
    j++;

   }
        

   


   
    for(int i=0;i<size2;i++){

           cout<<arr2[i]<<" ";  
    }
        
        
    
    
    return 0;
}