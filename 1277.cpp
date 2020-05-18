class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       long long int A[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    A[i][j]=0;
                }                
                else if(matrix[i-1][j-1]==0){
                    A[i][j]=0;
                }
                else if(matrix[i-1][j-1]==1){
                    A[i][j]=min(A[i-1][j-1] , min(A[i-1][j],A[i][j-1])) + 1;
                }
            }
        }
        long long int sum=0;
         for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                sum+=A[i][j];
            }
         }
        return sum;
    }
};