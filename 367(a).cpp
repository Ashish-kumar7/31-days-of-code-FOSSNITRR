class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long int y=sqrt(num);
        long long int z=y*y;
        
        if(z==num){
            return 1;
        }
            
        return 0;
    }
};