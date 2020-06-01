#include<iostream>

using namespace std;

int main(){
	string ss;
	cin>>ss;
	int len=ss.length();
	int ans=111111;
	for(int i=0;i<26;i++){
		char ch=i+'a';
		int k2=0,tt=1;
		for(int j=0;j<len;j++){
			if(ss[j]==ch) tt=1;
			else tt++;
			k2=max(k2,tt);
		}
		ans=min(ans,k2);
	}
	cout<<ans<<"\n";
	
	return 0;
}