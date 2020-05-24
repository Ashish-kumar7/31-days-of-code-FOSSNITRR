string organizingContainers(vector<vector<int>> container) {

    int n=container.size();
    int row[n];
    int col[n];
    for(int i=0;i<n;i++){
        row[i]=0;
        col[i]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            row[i]+=container[i][j];
            col[j]+=container[i][j];
        }
    }

    sort(row,row+n);
    sort(col,col+n);
    bool check=true;
    for(int i=0;i<n;i++){
        if(col[i]!=row[i]){
            check=false;
            break;
        }
    }
    if(check==false){
        return "Impossible";
    }
    else {
        return "Possible";
    }
}