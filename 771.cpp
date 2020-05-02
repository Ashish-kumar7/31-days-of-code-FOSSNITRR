class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<int,int>mp;
        for(int i=0;i<S.length();i++){
            mp[S[i]]++;
        }
        int count=0;
        for(int j=0;j<J.length();j++){
            auto it =mp.find(J[j]);
            count=count+it->second;
        }
    return count;    
    }
};