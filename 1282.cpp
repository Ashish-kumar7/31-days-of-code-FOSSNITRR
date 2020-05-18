class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mp;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>V;
        for(auto it=mp.begin();it!=mp.end();it++){
            vector<int>vec;
            for(int i=0;i<it->second.size();i++){
                vec.push_back(it->second[i]);
                if(vec.size()==it->first){
                    V.push_back(vec);
                    vec.clear();
                    
                }
            }   
        }
        return V;
    }
};