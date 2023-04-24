#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateSubsets(string str, string temp, int index, vector<string>& subsets, int sum ) {
    if (index == str.length()) {
        subsets.push_back(temp);
        return;
    }
   
    generateSubsets(str, temp + str[index], index + 1, subsets, sum+str[index]);
    generateSubsets(str, temp, index + 1, subsets,sum);
}

int main() {
    string str = "123";
    string temp = " ";
    vector<string> subsets;
    int sum=0;
    
    generateSubsets(str, temp, 0, subsets,sum);
  
    for (int i = 0; i < subsets.size(); i++) {

     
        cout << subsets[i] << endl;
    }

    cout<< "sum="<<sum;
    return 0;
}
