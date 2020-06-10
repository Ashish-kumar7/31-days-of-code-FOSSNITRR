
#include <bits/stdc++.h>

using namespace std;


int main(){

    long long int dp[1000001];

    for(int i=0;i<1000001;i++){
        dp[i]=i;
    }

    for(int i=1;i<1000001;i++){
       long long  int score=dp[i]+1;
       long long int limit;

        if (dp[i+1] > score){
            dp[i+1] = score;
        }


        if(i>1000){
            limit=1000001;
        }    
        else{
            limit=i*i;
        }

        for(int j=i+i;j<=limit;j=j+i){
            if(dp[j]>score){
                dp[j]=score;
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
