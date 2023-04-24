#include<iostream>
using namespace std;

void reverse(string &s,int start, int end){

if(start>end){

    
    return;
}

swap(s[start],s[end]);
reverse(s,start+1,end-1);


}

int main() {




string s="hello";

int length=s.size();
reverse(s,0,length-1);
cout<<s;


return 0;
}










