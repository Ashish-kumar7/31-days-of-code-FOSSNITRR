class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int x=grid.size();
        int y=grid[0].size();
        int A[x][y];
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                A[i][j]=grid[i][j];
            }
        }
        int B[y];
        for(int j=0;j<y;j++){
            int max1=INT_MIN; 
            for(int i=0;i<x;i++){
                if(A[i][j] > max1){
                    max1=A[i][j];
                }
                B[j]=max1;
            }
        }
        int C[x];
        for(int j=0;j<x;j++){
            int max2=INT_MIN;
            for(int i=0;i<y;i++){
                if(A[j][i] > max2){
                    max2=A[j][i];
                }
                C[j]=max2;
            }
        }
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                A[i][j]=min(B[j],C[i]);
            }
        }
        long long int sum=0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                sum=sum+( A[i][j] - grid[i][j] );
            }
        }
        return sum;   
    }
};