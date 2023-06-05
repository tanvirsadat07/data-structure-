
#include <bits/stdc++.h>
using namespace std;




void reserve_array(int arr[],int low, int high){


if(low>high){
    return ;
}
swap(arr[low],arr[high]);

return reserve_array(arr,low+1,high-1);

}


int main() {
    int arr[] = {1, 3, 4, 6, 8, 10,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    reserve_array(arr,0,size-1);

    for(int i=0;i<size;i++){

        cout<<arr[i]<<endl;

    }


   

    return 0;
}
