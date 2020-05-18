class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return 0;
        }
        vector<int>A(26,0);
        vector<int>B(26,0);
        for(int i=0;i<s1.length();i++){
            A[s2[i]-'a']++;
            B[s1[i]-'a']++;
        }
        if(A==B){
            return 1;
        }
        for(int i=s1.length();i<s2.length();i++){
            A[s2[i]-'a']++;
            A[s2[i-s1.length()]-'a']--;
            if(A==B){
                return 1;
            }
        }
        return 0;
    }
};