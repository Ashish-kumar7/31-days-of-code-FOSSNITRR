class Solution {
public:
    int findMaxLength(vector<int>& nums){
        
        int A[nums.size()];
        
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    A[i]=-1;
                }
                else{
                    A[i]=1;
                }
            }
        
        int sum=0;
        int max_len=0;
        map<int,int>mp;
        
        
        for(int i=0;i<nums.size();i++){
            sum+=A[i]; 
            
            if(max_len==0 &&  sum==0){
                max_len=1;
            }
            
            if(sum==0){
                max_len=i+1;
            }
            
            else if(mp.find(sum)!=mp.end()){   
                max_len=max(max_len,i-mp[sum]);
            }
            
            else{
                mp[sum]=i;
            }
            
        }
        return max_len;   
        }
};