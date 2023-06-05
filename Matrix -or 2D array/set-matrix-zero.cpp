
#include <bits/stdc++.h>
using namespace std;



void markRow(vector<vector<int>>& matrix,int n , int m , int i){


    for(int j=0;j<n;j++){

       

            if(matrix[i][j]!=0){
                matrix[i][j]=-1;

            }
        
    }
}


void markCol(vector<vector<int>>& matrix,int n , int m , int j){


    for(int i=0;i<n;i++){

       

            if(matrix[i][j]!=0){
                matrix[i][j]=-1;

            }
        
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

  

    return matrix;
}

int main()
{
   


  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();

    cout<< "here is before  " <<endl;

    for (auto i : matrix) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
cout<< " here is after "<< endl ;
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
