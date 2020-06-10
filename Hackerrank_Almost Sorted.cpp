#include <bits/stdc++.h>

using namespace std;

void almostSorted(vector<int> arr) {

    int n=arr.size();
    vector<int>A(n);
    for(int i=0;i<n;i++){
        A[i]=arr[i];
    }
    sort(A.begin(),A.end());
    if(A==arr){
        cout<<"yes"<<endl;
    }
    else{
          int count=0;
         int counter;
        int counter1;
        for(int i=0;i<n;i++){
            if(A[i]!=arr[i]){
                count++;
                counter=i;
            }
        }
        if(count>2){
            int cc=counter+1;
           int dd=counter-count+1;

            if(A[dd-1]!=arr[dd-1]){
               dd=dd-1;
           }

            reverse(arr.begin()+dd , arr.begin()+cc);
            if(A==arr){
                cout<<"yes"<<endl;
                cout<<"reverse"<<" "<<dd+1<<" "<<cc<<endl;
            }
            else {
                cout<<"no"<<endl;
            }
        }

        else if(count==2){
            for(int i=0;i<n;i++){
            if(A[i]!=arr[i]){
                counter1=i;
                break;
            }
        }
        cout<<"yes"<<endl;
        cout<<"swap"<<" "<<counter1+1<<" "<<counter+1<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}
int main(){
   int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    almostSorted(arr);
    return 0;
}
