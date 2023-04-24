#include<iostream>
using namespace std;

bool palindrom(string &s,int start, int end){

if(start>end){

    
    return true ;
}


if(s[start]!=s[end]){

    return false;
}

else{
   return palindrom(s,start+1,end-1);
}

}

int main() {




string s="ollo";

int length=s.size();
bool x=palindrom(s,0,length-1);
if(x){

    cout<<"yes";
}
else{
    cout<<"NO";
}

return 0;
}










