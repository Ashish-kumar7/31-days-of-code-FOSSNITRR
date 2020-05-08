class Solution {
public:
    bool stoneGame(vector<int>& a) {
        
        int n = a.size();
        pair<int, int> dp[n][n];
        for(int i = 0; i < n; ++i){
            dp[i][i].first = a[i];
            dp[i][i].second = 0;
        }
        for(int turn = 2; turn <= n; turn++){
            for(int i = 0; i <= n - turn; ++i){
                
                int j = i + turn - 1;
                
                int pickLeft = a[i] + dp[i+1][j].second;
                int pickRight = a[j] + dp[i][j-1].second;
                
                dp[i][j].first = max(pickLeft, pickRight);
                
                if(dp[i][j].first == pickLeft){
                    dp[i][j].second = dp[i+1][j].first;
                }                    
                else{
                    dp[i][j].second = dp[i][j-1].first;
                }
            }
        }
        return dp[0][n-1].first > dp[0][n-1].second;
    }
};