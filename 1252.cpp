//Q.1252 Leetcode 
//Given n and m which are the dimensions of a matrix initialized by zeros and given an array indices where indices[i] = [ri, ci]. 
//For each pair of [ri, ci] you have to increment all cells in row ri and column ci by 1.

//Return the number of cells with odd values in the matrix after applying the increment to all indices.




class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int A[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                A[i][j]=0;
            }
        }
        int k=0;
        while(k<indices.size()){
            int y=indices[k][0];
            int x=indices[k][1];
            for(int j=0;j<m;j++){
                A[y][j]+=1;
            }
            for(int jj=0;jj<n;jj++){
                A[jj][x]+=1;
            }
            k++;
        }        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};