class Solution {
public:
    int countSubstrings(string s) {
        
        int n=s.length();
	    int count=0;
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
                dp[i][i]=1;
                count++;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(i-1==j && s[i]==s[j]){
                    dp[j][i]=1;
                    count++;
            }
            else if(s[i]==s[j] && dp[j+1][i-1]==1){
                dp[j][i]=1;
                count++;
            }
        }
	}
	return count;
        
        
    }
};