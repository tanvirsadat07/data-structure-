#include <bits/stdc++.h>
using namespace std;

// solution 1-

int largest1(int array[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, array[i]);
    }
    return maxi;
 }

// solution  2-

int largest2(int arr[], int size)
{
   
   sort(arr,arr+size);
    return arr[size-1];
}

int main()
{

    int array[] = {11, 12, 144, 16, 77};
    int size = sizeof(array) / sizeof(array[0]);

    cout << largest1(array, size);
    return 0;
}