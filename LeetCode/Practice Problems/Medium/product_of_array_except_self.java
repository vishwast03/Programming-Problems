class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        ans[n - 1] = nums[n - 1];
        
        for(int i = n - 2; i >= 0; i--) {
            ans[i] = ans[i + 1] * nums[i];
        }
        
        int pre = 1;
        for(int i = 0; i < n; i++) {
            if(i + 1 < n) {
                ans[i] = pre * ans[i + 1];
            }
            else {
                ans[i] = pre;
            }
            pre *= nums[i];
        }
        
        return ans;
    }
}