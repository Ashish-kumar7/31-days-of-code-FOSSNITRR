#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
       long long int a,b;
        cin>>a;
        cin>>b;
        long long int x= __gcd(a, b) ;
        if(a==b){
            cout<<0<<endl;
        }
        else if(x==a || x==b){
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}
