class Solution {
    public int missingNumber(int[] nums) {
        int xor = 0;
        
        for(int i : nums) {
            xor = xor ^ i;
        }
        
        for(int i = 1; i <= nums.length; i++) {
            xor = xor ^ i;
        }
        
        return xor;
    }
}