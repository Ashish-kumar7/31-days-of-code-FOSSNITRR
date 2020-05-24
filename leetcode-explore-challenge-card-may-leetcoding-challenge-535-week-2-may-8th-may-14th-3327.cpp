class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        for(int i=0;i<A.size()-1;){
            if(A[i+1]==A[i]){
                i=i+2;
            }
            else {
                return A[i];
            }
        }
        return A[A.size()-1];
    }
};