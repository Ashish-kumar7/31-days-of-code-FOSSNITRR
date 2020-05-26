#include<bits/stdc++.h>
#define F(i,n)for(int i=0;i<(int)n;i++)
using namespace std;
void md(string&s){
    for(auto&i:s){
        if(i=='l'||i=='L'||i=='i'||i=='I')i='1';
        if(i=='o'||i=='O')i='0';
        if(isupper(i))i+='a'-'A';
        
    }
    
}
int main(){
    string s;
    cin>>s;
    md(s);
    int n;
    cin>>n;
    bool f=1;
    F(i,n){
        string t;
        cin>>t;
        md(t);
        if(s==t)f=0;
        
    }
    cout<<(f?"Yes":"No");
    return 0;
    
}