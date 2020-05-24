class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<pair<int,int>>A(N+1,{0,0});
        for(int i=0;i<trust.size();i++){
            A[trust[i][0]].first +=1;
            A[trust[i][1]].second +=1;   
        }
        for(int i=1;i<=N;i++){
            if(A[i].first==0){
                if(A[i].second==N-1){
                    return i;
                }
            }
        }
        return -1;
    }
};