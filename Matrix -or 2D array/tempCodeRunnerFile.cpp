
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