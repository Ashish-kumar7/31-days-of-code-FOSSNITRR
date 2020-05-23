class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>V;
        long long int x=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(x<candies[i]){
                x=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            candies[i]+=extraCandies;
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=x){
                V.push_back(1);
            }
            else {
                V.push_back(0);
            }
    }
        return V;
}
};