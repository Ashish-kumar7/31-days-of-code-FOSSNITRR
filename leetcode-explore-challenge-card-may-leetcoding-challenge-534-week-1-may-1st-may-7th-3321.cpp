class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        map<int,int>:: iterator it;
        int n=nums.size();
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second > n/2){
               return it->first;
            }
        }
        return -1;
    }
};