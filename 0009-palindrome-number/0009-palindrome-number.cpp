class Solution {
public:
    bool isPalindrome(int x) {
        long long rev= 0;
        int x1;
        x1=x;
        if(x<0){
            return false;
        }
       while(x>0){
        rev = x%10 + 10*rev;
        x=x/10;
       }
       
       return rev == x1;

    }
};