vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector<int>A;
    int n=arr.size();
    int shortest=arr[0];
    A.push_back(n);
    int remain=n;
    for(int i=1;i<n;i++){
        if(arr[i]!=shortest){
            shortest=arr[i];
        remain=n-i;
        A.push_back(remain);
        }
    }
    return A;
}
