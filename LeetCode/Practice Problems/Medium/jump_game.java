class Solution {
    public boolean canJump(int[] nums) {
        int i = 0, steps = 0, n = nums.length;
        
        do {
            steps = Math.max(nums[i] + i, steps);
            if(steps >= n - 1) return true;
            else if(steps == i) return false;
            i++;
        } while(steps >= i && i < n);
        
        return false;
    }
}