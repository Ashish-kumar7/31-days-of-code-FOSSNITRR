//Q. Length of last word  interview Bit

 //Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

int Solution::lengthOfLastWord(const string A) {
    
int len = 0;
for(int i = A.size() - 1 ; i >= 0 ; i--){
     if(len > 0 && A[i] == ' '){
        break;
     }
     else if(A[i] != ' '){
        len++;
     }
     else if(A[i] == ' '){
     }
}
        return len;
}
