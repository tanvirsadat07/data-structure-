
#include<iostream>

#include<set>
using namespace std;
using namespace std;
 
void duplicate_erase(int arr[], int n)
{
   set<int> s;
 
    

    for(int i=0;i<n;i++){

        s.insert(arr[i]);
        
    }


int j=0;


for(auto x:s){

    arr[j++]=x;
}


  

}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicate_erase(arr, n);

     for(int i=0;i<n;i++){

   cout<<arr[i]<<endl;
        
    }
    return 0;
}