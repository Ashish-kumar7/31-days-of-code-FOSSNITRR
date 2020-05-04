class Solution {
public:
    int change(int amount, vector<int>& coins){
        int m=coins.size();
        sort(coins.begin(),coins.end());
        int A[m+1][amount+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=amount;j++){
                if(i==0 && j==0){
                    A[i][j]=1;
                }
                else if(i==0){
                    A[i][j]=0;
                }
                else if(j==0){
                    A[i][j]=1;
                }
                else if(j>=coins[i-1]){
                    A[i][j]=A[i-1][j] + A[i][j-coins[i-1]];
                }
                else {
                    A[i][j]=A[i-1][j];
                }
            }
        }
        return A[m][amount];        
    }
};