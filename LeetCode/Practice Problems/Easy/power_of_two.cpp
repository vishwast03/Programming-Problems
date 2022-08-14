class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        for(int i = 0; i < 30; i++) {
            
            if(ans == n)
                return true;
            
            ans = ans << 1;
            
        }
        
        if(ans == n)
            return true;
        
        return false;
        
    }
};