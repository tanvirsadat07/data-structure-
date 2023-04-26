#include <iostream>
using namespace std;

// Function to find the missing number
int missing(int arr[], int size) {
    int count =0;
    int maxi=-1;;
    for (int i = 0; i < size; i++) {

            if(arr[i]==1){
             count ++;
             maxi=max(maxi,count);

            }

            else{

                count=0;
            }



    }

return maxi;
}

int main() {
    int arr[] = {1, 1, 3, 1,1,1,0,2,1 ,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = missing(arr, size);
    cout << ans;
    return 0;
}
