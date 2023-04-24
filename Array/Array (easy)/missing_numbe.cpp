
#include <iostream>
using namespace std;
// Function to Reverse the array
int missing (int nums[], int size)
{
   int maxi =nums[0];
    int w;

    for (int i = 0; i <size; i++) {
        maxi = max(maxi, nums[i]);
    }

    int hash[12] = {0};
    for (int i = 0; i <size; i++) {
        hash[nums[i]]++;
    }

    for (int i = 0; i < size; i++) {
        if (hash[i] == 0) {
           w=i;
        }
    }
    return w;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 6, 7};
  
 int size=sizeof(arr)/sizeof(arr[0]);
 int ans=missing ( arr , size);
  
  cout<< ans ;
  return 0;
}


