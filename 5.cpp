class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.length();
        if(n<2){
            return s;
        }

        int dp[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        int start=0;
        int max_len=1;
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i;
                max_len=2;
            }
            
        }
        
        for(int len=3;len<=n;len++){
            for(int i=0;i+len<=n;i++){
                int j=i+len-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    
                    dp[i][j]=1;
                    if(len>max_len){
                        start=i;
                        max_len=len;
                    }
                }
            }
        }
        string str;
    for(int i=start;i<max_len+start;i++){
        str=str+s[i];
    }
    
        return str;
    }
};