class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>C;
        int i=0;
        int j=0;
        while( i<A.size() && j<B.size() ){
            int less=max(A[i][0], B[j][0] );
            int more=min(A[i][1], B[j][1] );
            if(less<=more){
                vector<int>V;
                V.push_back(less);
                V.push_back(more);
                C.push_back(V);
            }
            if(A[i][1]<B[j][1]){
                i++;
            }
            else {
                j++;
            }   
        }
        return C;
        
    }
};