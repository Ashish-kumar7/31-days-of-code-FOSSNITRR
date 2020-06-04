class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});         
        }
        string sc="";
        while(!pq.empty()){
            pair<int,char>p=pq.top();
            while(p.first--){
                sc+=p.second;
            }
            pq.pop();
        }
       return sc;       
    }
};