class Solution {
public:
    bool canConstruct(string ransome, string magazine) {
        map<char,int>mp;
        for(int i=0;i<magazine.length();i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransome.length();i++){
            auto it=mp.find(ransome[i]);
            if(it==mp.end()){
                return 0;
            }
            if(it->second==0 || it->second<0){
                return 0;
            }
            else {
                it->second=(it->second)-1;
            }
        }
        return 1;
    }
};