long countTriplets(vector<long> a, long k) {

    map<long long int,long long int>r,l;
long long int ans=0;
int n=a.size();
for(int i=0;i<n;i++){
  r[a[i]]++;
}

 for(int i=0;i<n;i++)
 {
  r[a[i]]--;
  if(a[i]%k==0)
  {
   ans+=l[a[i]/k]*r[a[i]*k];
  }
  l[a[i]]++;
 }
 return ans;
}