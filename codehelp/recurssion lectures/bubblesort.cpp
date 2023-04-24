#include<iostream>
using namespace std;

void  bubble(int arr[], int size )

{

        if(size==0){

            return ;
        }
        if(size==1){
            return ;
        }

        for(int i=0;i<size-1;i++){


            if(arr[i]>arr[i+1]){

                swap(arr[i],arr[i+1]);
            }
        }

        bubble(arr,size-1);


}



int main() {



int arr[]={12,1,13,22,9};

int size=sizeof(arr)/sizeof(arr[0]);

bubble(arr, size);


for(int i=0;i<size;i++){


    cout<<arr[i]<<endl;
}


}










