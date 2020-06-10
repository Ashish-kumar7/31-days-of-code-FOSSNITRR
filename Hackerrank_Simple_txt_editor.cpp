#include<bits/stdc++.h>
using namespace std;
stack<string> st;
int main() {
    int t;
    cin>>t;
    string s = "";
    string temp;
    while(t--) {
        int q, k;
        cin>>q;
        switch(q) {
            case 1:
                st.push(s);
                cin >> temp;
                s = s + temp;
                break;
            case 2:
                st.push(s);
                cin>>k;
                s = s.substr(0, s.length() - k);
                break;
            case 3:
                cin>>k;
                cout << s[k-1] << endl;
                break;
            case 4:
                s = st.top();
                st.pop();
                break;
        }
    }
    return 0;
}