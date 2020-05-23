class Solution {
public:
    int numTeams(vector<int>& rating) {
        if(rating.empty()){
            return 0;
        }
        
        int ans = 0;
        for(int j=1; j<rating.size()-1; j++){ 
            
            int i_smaller=0, i_larger=0, k_smaller=0, k_larger=0;
            
            for(int i=0; i<j; i++) { 
                if(rating[i] < rating[j]){
                    i_smaller++;
                }
                else if(rating[i] > rating[j]){
                    i_larger++;
                }
            }
            for(int k=j+1; k<rating.size(); k++) { 
                if(rating[j] < rating[k]){
                    k_larger++;
                }
                else if(rating[j] > rating[k]){
                    k_smaller++;
                }
                
            }
            ans += i_smaller * k_larger + i_larger * k_smaller;
        }
        return ans;
    }
};