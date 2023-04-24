#include <iostream>

using namespace std;
int main() {
    int arr[]={1,0,1,0,1,1,0,1,1,0,1,0};

    int i=0,j=1;
    int s=sizeof(arr)/sizeof(arr[0]);


    while(i<s&&j<s)
    {


        if(arr[i]==0){
            i++;

        }

        else if(arr[j]==1&&arr[i]==1){


            j++;
        }

        else if(arr[i]==1&&arr[j]==0){

            swap(arr[i],arr[j]);
        }
    }



for(int i=0;i<s;i++){

    cout<<arr[i]<<endl;
}


return 0;
}