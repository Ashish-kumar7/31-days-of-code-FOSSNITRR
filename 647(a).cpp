class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            count++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                count++;
            }
        }        
        for(int len=2;len<n;len++){
            for(int i=0;i+len<n;i++){
                int j=i+len;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=1;
                    count++;
                }
            }
        }
        return count;
    }
};