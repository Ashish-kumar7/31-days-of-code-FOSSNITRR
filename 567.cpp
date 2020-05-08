class Solution {
public:
    bool match(int A[],int B[]){
        for(int i=0;i<26;i++){
            if(A[i]!=B[i]){
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return 0;
        }
        int A[26];
        for(int i=0;i<26;i++){
                A[i]=0;
            }
        for(int i=0;i<s1.length();i++){
            A[s1[i]-'a']++;
        }
        for(int i=0;i<=(s2.length()-s1.length());i++){
            int B[26];
            for(int i=0;i<26;i++){
                    B[i]=0;
            }
            for(int j=0;j<s1.length();j++){
                B[s2[i+j]-'a']++;
            }
            if(match(A,B)){
                return 1;
            }
        }
        return 0;
    }
};