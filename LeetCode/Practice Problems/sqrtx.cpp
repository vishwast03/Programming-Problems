class Solution {
public:
    
    long long binarySearch(int x) {
        int s = 0, e = x;
        long long mid = s + (e - s) / 2;
        long long ans = -1;
        while(s <= e) {
            long long sq = mid * mid;
            
            if(sq == x) {
                return mid;
            }
            else if(sq < x) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return binarySearch(x);
    }
};