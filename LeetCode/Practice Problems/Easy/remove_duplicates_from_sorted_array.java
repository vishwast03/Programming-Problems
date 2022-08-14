class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0, prev = Integer.MIN_VALUE;

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] != prev) {
                nums[k] = nums[i];
                prev = nums[i];
                k++;
            }
        }

        return k;
    }
}
// Returns k after placing the final result in the first k slots of nums.