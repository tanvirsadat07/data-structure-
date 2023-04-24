#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
  int mid;

    while(s<e) {
          mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        // mid = s + (e-s)/2;
    }
    return e;
}

int main() {
    int arr[5] = { 10, 17,1,2,5};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}