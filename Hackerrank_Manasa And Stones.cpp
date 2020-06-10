vector<int> stones(int n, int a, int b) {
    int c=max(a,b);
    int d=min(a,b);
    vector<int>V;
    map<int,int>mp;

    n--;
    for(int i=0;i<=n;i++){
        long long int y=c*i + (n-i)*d;
        mp[y]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        V.push_back(it->first);
    }

    return V;
}