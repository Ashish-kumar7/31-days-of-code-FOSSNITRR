class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>A;
        if(p.length()>s.length()){
            return A;
        }
        vector<int>sa(26,0);
        vector<int>pa(26,0);
        for(int i=0;i<p.length();i++){
            sa[s[i]-'a']++;
            pa[p[i]-'a']++;
        }
        if(sa==pa){
            A.push_back(0);
        }
        for(int i=p.length();i<s.length();i++){
            sa[s[i]-'a']++;
            sa[s[i-p.length()]-'a']--;
            if(sa==pa){
                A.push_back(i-p.length() + 1);
            }
        }
        return A;
    }
};