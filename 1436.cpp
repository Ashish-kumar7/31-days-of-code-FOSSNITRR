class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>mp;
        vector<string>V;
        for(int i=0;i<paths.size();i++){
            V.push_back(paths[i][0]);
            V.push_back(paths[i][1]);
            mp[paths[i][0]]=paths[i][1];
        
        }
        for(int i=0;i<V.size();i++){
            if(mp.find(V[i])==mp.end()){
                return V[i];
            }
        }
        string aa="All";
        return aa;
    }
};