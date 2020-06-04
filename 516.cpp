class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
         int n=s.length();
         int dp[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        
        
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        
        for(int len=1;len<n;len++){
            for(int i=0;i+len<n;i++){
                
                int j=i+len;
                
                if(s[i]==s[j]){
                    dp[i][j]= 2 + dp[i+1][j-1];
                }
                else{
                    dp[i][j] = max( dp[i+1][j] , dp[i][j-1] );     
                }
            }
        }
        return dp[0][n-1];
    }
};