class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[2 * n];
        
        int x = 0, y = n;
        for(int i = 0; i < 2 * n; i += 2) {
            ans[i] = nums[x];
            ans[i + 1] = nums[y];
            x++; y++;
        }
        
        return ans;
    }
}