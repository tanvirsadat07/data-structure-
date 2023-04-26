#include<bits/stdc++.h>

using namespace std;
void rotate_left(int arr[], int n) {
 

int k=0;

for(int i=0 ;i<n;i++){
if( arr[i]==0){
    k=i;
    break ; // fond first zero 
}
   
}

for(int j=k;j<n; j++){// start from first zro 

if( arr[j]!=0){// j will find onlt non zero 

    swap(arr[k], arr[j]);// when find non zero it will swap so that the zero reches the end 
    k++;// as it keep track of the zro so ++;
}

}

for(int i=0 ;i<n;i++){

cout<< arr[i]<< " ";
}

}



int main() {
  int n=8;
  
  int arr[]= {1,2,0,3,4, 0 ,5, 0 , 1};



  rotate_left(arr, n);
}