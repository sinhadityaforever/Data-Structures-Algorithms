class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int colz =1;
        int tst=1;
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                if(matrix[i][j]==0){
                    tst =0;
                    matrix[i][0]=0;
                    if(j!=0) matrix[0][j]=0;
                    else colz=0;
                }
            }
        }
        // if(m==1 || n==1){
        //     if(tst ==0){
        //         for(int i=0; i<m; i++){
        //             for(int j =0; j<n; j++) matrix[i][j]=0;
        //         }
        //         return;
        //     }
        // }

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]!=0 && (matrix[i][0]==0 || matrix[0][j]==0)) matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0){
            for(int j=0; j<n; j++){
                matrix[0][j]=0;
            }
        }
        if(colz==0){
            
            for(int i =0; i<m; i++){
                matrix[i][0]=0;
            }
        }



    }
};