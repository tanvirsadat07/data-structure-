#include<bits/stdc++.h>

using namespace std;
void rotate_left(int arr[], int n, int d) {
 d=d%n ;// this is to make  the rotate more than the n value to work 
 // like if n=7 and d=15 the it will do one rotate 
 // or its d=3 and n =7 then d=3 

if(d==0)return ;//bcz n=7 and d=14 then d=0 so after 14 rotate its in the same position 


 int temp[d];// take a new array to keep the first  value 

for(int i=0;i<d;i++)
{
    temp[i]=arr[i];
}

for(int i=d;i<n;i++){

    arr[i-d]=arr[i];// it will start the d value and take it d times left 
}

for(int i=n-d;i<n;i++){

    arr[i]=temp[i-(n-d)];// i -(n-d)=0, 1, 2 how this wors it it started from 4 so then if you - the 4 so its 0 then it increses and goes i=5 so 5 -4 =1 
}



for(int i=0 ;i<n;i++){

    cout<<arr[i]<<" ";
}

}
void solution2(int arr[], int n, int d)
{


    d=n%d;

  // Reverse first d elements
  reverse(arr,arr+d);
  // Reverse  d to last element 
  reverse(arr+d,arr+n );
  // Reverse whole array
  reverse(arr,arr+n );
  for(int i=0 ;i<n;i++){

    cout<<arr[i]<<" ";
}
}


int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};

  int d=3;
  //rotate_left(arr, n, d);
  solution2(arr, n,d);
}