#include<iostream>
#include<vector>
using namespace std;




int  large (int * arr, int size, int max ){


int  index ;


   for(int i=0;i<size;i++){


if(arr[i]>max){

    max=arr[i];
    index=i;
}

   }


return index;




}






int main (){

int arr1[]={1,2,34,11,13};
int arr2[]={5,7};
vector <int> a;

int size1=sizeof(arr1)/sizeof(arr1[0]);

int max =arr1[0];
int index=large(arr1,size1,max);

arr1[index]=-1;

int ans=large(arr1,size1,max);
cout<< arr1[ans] ;





    return 0;
}