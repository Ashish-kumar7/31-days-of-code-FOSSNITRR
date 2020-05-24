class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& A) {
        if(A.size()==2){
            return 1;
        }
        double x=A[1][1]-A[0][1];
        double y=A[1][0]-A[0][0];
        double z=x/y;
        for(int i=1;i<A.size()-1;i++){
            double xx=A[i+1][1]-A[i][1];
            double yy=A[i+1][0]-A[i][0];
            double zz=xx/yy;            
            if(zz!=z){
                return 0;
            }
        }
        return 1;   
    }
};