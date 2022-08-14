class Solution {
    public int mySqrt(int x) {
        int s = 1, e = x;
        int m = s + (e - s) / 2;
        
        int ans = 0;
        while(s <= e) {
            if(m <= (x / m)) {
                ans = m;
                s = m + 1;
            }
            else {
                e = m - 1;
            }
            
            m = s + (e - s) / 2;
        }
        
        return ans;
    }
}