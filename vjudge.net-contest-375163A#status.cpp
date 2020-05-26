#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++){
       cin>>A[i];
   }
   
   map<int,vector<int>, greater <int> >mp;
   for(int i=0;i<n;i++){
       mp[A[i]].push_back(i);
   }
   
   
   int B[n];
   int index=1;
   for(auto it=mp.begin();it!=mp.end();it++){
       vector<int>P=it->second;
       for(int i=0;i<P.size();i++){
           B[P[i]]=index;
       }
       index=index+P.size();
   }
   
   for(int i=0;i<n;i++){
       cout<<B[i]<<" ";
   }
   cout<<endl;
   
}