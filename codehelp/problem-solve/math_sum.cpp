// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


void reverse(vector<int> &arr){

    
    int size=arr.size();
      int s=0,e=size-1;

 
    while(s<=e){


   swap(arr[s],arr[e]);
    s++;
    e--;
    }

   
        

   


   
    for(int i=0;i<size;i++){

           cout<<arr[i]<<" ";  
    }
        
        



}




int main() {
    int arr1[]={1};
    int arr2[]={9,9};
    //int arr3[]={0};



    
    

 
  
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    
int end1=size1-1;
int end2=size2-1;
int carry=0,digit,sum=0;
vector<int>a;

while(end1>=0&&end2>=0){

    int x=arr1[end1];
    int y=arr2[end2];
    sum=x+y+carry;
    digit=sum%10;
    carry=sum/10;
    a.push_back(digit);
   
    end1--;
    end2--;



}

while(end1>=0){

     sum=arr1[end1]+carry;
    digit=sum%10;
  
    a.push_back(digit);
    carry=sum/10;
    end1--;



}
while(end2>=0){

     sum=arr2[end2]+carry;
    digit=sum%10;
  
    a.push_back(digit);
    carry=sum/10;
    end2--;



}


while(carry!=0){
  
    
       int sum = carry;
        carry = sum/10;
        sum = sum%10;
        a.push_back(sum);
     

}

reverse(a);
    

    return 0;
}