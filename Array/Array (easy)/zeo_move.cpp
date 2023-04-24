#include <iostream>
#include <vector>
using namespace std;



vector< int> remove(vector<int>&a){



int i=0;
int size=a.size();

while(i<size){

    if(a[i]==0){
        break;
    }
    else{
        i++;
    }
}


int k=i,j=i+1;

for(int l=j;l<size;l++){

    if(a[l]!=0){
        swap(a[l],a[i]);
        i++;

    }
}

return a;
}

int main (){
int arr1[]={0,1,0,11,0,14,13};
int i=0;
int m=sizeof(arr1)/sizeof(arr1[0]);
vector<int> a;
while(i<m){

    a.push_back(arr1[i]);
    i++;
}

remove(a);



for(i=0;i<a.size();i++){

    cout<< a[i]<<" ";
}


    return 0;
}