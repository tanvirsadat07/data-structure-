
// #include<iostream>

// #include<set>

// #include<vector>
// using namespace std;

 
// void unionofarray(int arr[],int arr1[],int n, int n1, vector<int>&a)
// {
//    set<int> s;
 
    

//     for(int i=0;i<n;i++){

//         s.insert(arr[i]);
        
//     }


//     for(int i=0;i<n1;i++){

//         s.insert(arr1[i]);
        
//     }


// int j=0;


// for(auto x:s){

//    a.push_back(x);
// }


  

// }
 
// int main()
// {
//     int arr[] = {10,5,10,15,10,5};
//     int arr1[]={2,4,5,4,5};
//     vector<int> a;
    
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     unionofarray(arr,arr1,n, n1, a);
    

//      for(int i=0;i<a.size();i++){

//    cout<<a[i]<<endl;
        
//     }
//     return 0;
// }



//the optimizes solution 


#include<iostream>
#include<set>
#include<vector>
using namespace std;

 
vector<int> unionofarray(int arr[],int arr1[],int n, int n1)
{


int i=0, j=0;

vector <int> a;


while(i<n&&j<n1){



    if(arr[i]<arr1[j]){

        if(a.size()==0||a.back()!=arr[i]){

            a.push_back(arr[i]);
         

        }
        i++;
        
    }

    else{

    if(a.size()==0||a.back()!=arr1[j]){

            a.push_back(arr1[j]);
          

        }
          j++;



    }
}



while( i<n){

 if(a.size()==0||a.back()!=arr[i]){

            a.push_back(arr[i]);
         

        }
        i++;
        
    }


while(j<n1)
{

if(a.size()==0||a.back()!=arr1[j]){

            a.push_back(arr1[j]);
          

        }
          j++;


} 
    



return a;
  

}
 
int main()
{
    int arr[] = {10,10,15,30,30};
    int arr1[]={2,4,5,5};

    
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> b =unionofarray(arr,arr1,n,n1);
    

     for(int i=0;i<b.size();i++){

   cout<<b[i]<<endl;
        
    }
    return 0;
}
