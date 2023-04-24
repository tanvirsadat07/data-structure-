
#include<iostream>

#include<vector>
using namespace std;

 
vector<int> selectionofarray(int arr[],int arr1[],int n, int n1)
{


int i=0, j=0;

vector <int> a;


while(i<n&&j<n1){



    if(arr[i]>arr1[j]){

       

     j++;
    }

   else if(arr[i]<arr1[j]){

    i++;

   }
   else{

    a.push_back(arr[i]);
    j++;
    i++;
   }
   
    
}






return a;
  

}
 
int main()
{
    int arr[] = {2,2,4,5};
    int arr1[]={2,4,5,5};

    
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> b =selectionofarray(arr,arr1,n,n1);
    

     for(int i=0;i<b.size();i++){

     cout<<b[i]<<endl;
        
    }
    return 0;
}
