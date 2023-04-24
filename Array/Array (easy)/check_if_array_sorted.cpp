#include <bits/stdc++.h>
using namespace std;



bool sort (int arr[], int size)
{
  for(int i=0;i<size-1;i++){
if(arr[i]>arr[i+1]){
    return  false;
} 
  }
  return true ;
}

int main()
{

    int array[] = {11, 12, 14, 16, 77};
    int size = sizeof(array) / sizeof(array[0]);

    cout << sort(array, size);
    return 0;
}