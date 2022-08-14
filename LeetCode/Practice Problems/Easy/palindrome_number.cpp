class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        if(x < 10)
            return true;
        
        unsigned int n = x;
        unsigned int rev = 0;
        
        while(n > 0) {
            unsigned int d = n%10;
            n /= 10;
            rev = rev*10 + d;
        }
        
        if(rev == x)
            return true;
        else
            return false;
    }
};