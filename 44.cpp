class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();
        int A[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                A[i][j]=0;
            }
        }
        A[0][0]=1;
        for(int i=1;i<=m;i++){
            if(p[i-1]=='*'){
                A[0][i]=A[0][i-1];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(p[j-1]=='*'){
                        A[i][j]= ( A[i][j-1] || A[i-1][j] );
                   }
                else if( p[j-1]=='?' || p[j-1]==s[i-1]){
                    A[i][j]=  A[i-1][j-1];
                }       
                else{
                    A[i][j]= 0;
                }
            }
        }
       return A[n][m];
    }
};