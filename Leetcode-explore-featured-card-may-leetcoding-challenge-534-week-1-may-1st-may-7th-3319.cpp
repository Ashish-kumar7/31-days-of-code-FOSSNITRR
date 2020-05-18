class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0){
            return 1;
        }
        int count=0;
        int jk=num;
        while(num>0){
            count++;
            num=num/2;
        }
        long long int cc=pow(2,count);
        int hh=cc-1;
        return hh^jk;
    }
};