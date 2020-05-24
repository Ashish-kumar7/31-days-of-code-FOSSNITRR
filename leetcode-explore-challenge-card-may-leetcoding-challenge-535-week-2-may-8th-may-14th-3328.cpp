class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>S;
        for(int i=0;i<num.length();i++){
            while( (!S.empty() && S.top()>num[i] && k) ) {
                S.pop();
                k--;
            }
            if(!S.empty() || num[i]!='0'){
                S.push(num[i]);
            }
        }
        while(k-- && !S.empty()){
            S.pop();
        }
        if (S.empty()) return "0";
        const int n = S.size();
        while(!S.empty()) {
            num[S.size()-1] = S.top();
            S.pop();
        }
        return num.substr(0, n);
     }
};