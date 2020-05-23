class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>A;
        for(int i=0;i<nums.size();i++){
            
            A.insert(A.begin()+index[i] , nums[i]);
        }
        return A;
    }
};