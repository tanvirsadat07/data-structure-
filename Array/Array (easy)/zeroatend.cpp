
#include<iostream>
using namespace std;

void duplicate_erase(int arr[], int n)
{
   
int i=0,j=0;
while( i<n){

    while(i<n){

        if( arr[i]==0){

            j=i;
            //break;
        }
        i++;
    }


}

cout<< j<<endl ;


  

}
 
int main()
{
    int arr[] = {10,0,0,15,10,5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicate_erase(arr, n);

//      for(int i=0;i<n;i++){

//    cout<<arr[i]<<endl;
        
//     }
    return 0;
}