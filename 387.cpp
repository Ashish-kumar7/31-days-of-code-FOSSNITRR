class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>A(26,0);
        for(int i=0;i<s.length();i++){
            A[s[i]-'a']++;
        }
        
        for(int j=0;j<s.length();j++){
            if(A[s[j]-'a'] == 1){
                return j;
            }
        }
        
        return -1;
        
    }
};