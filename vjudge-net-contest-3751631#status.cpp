#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int A[n];
   double sum=0;
   for(int i=0;i<n;i++){
       cin>>A[i];
        sum+=A[i];
       
   }    
   double f=sum/n;
   
   cout<<fixed<<setprecision(9)<<f;
  
   cout<<endl;
   
   return 0;
   
}