#include <bits/stdc++.h>
using namespace std;
int main(){

	long long int n;
	cin>>n;
	long long int A[n];
	long long int B[n];
	for(long long int i=0;i<n;i++){
		cin>>A[i];
	}
	for(long long int i=0;i<n;i++){
		cin>>B[i];
	}
for(long long int i=0;i<n;i++){
		B[i]=B[i]/A[i];
	}
sort(B,B+n);
cout<<B[0]<<endl;

}