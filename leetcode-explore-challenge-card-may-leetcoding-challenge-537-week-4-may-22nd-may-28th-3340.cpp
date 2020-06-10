class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int x=A.size();
        int y=B.size();
        cout<<x<<" "<<y<<endl;
        int dp[y+1][x+1];
        for(int i=0;i<=y;i++){
            for(int j=0;j<=x;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else if(A[j-1]==B[i-1]){
                    dp[i][j]=dp[i-1][j-1] + 1;
                }
                else if(A[j-1]!=B[i-1]){
                    dp[i][j]=max( dp[i][j-1] , dp[i-1][j] );
                }
            }
        }
        return dp[y][x];
    }
};