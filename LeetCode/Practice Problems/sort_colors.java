class Solution {
    public void sortColors(int[] nums) {
        // We assume that all the elements before s are 0 and all the elements after e are 2
        int s = 0, e = nums.length - 1;
        int i = 0;    // a variable to iterate the array
        
        while(i <= e) {
            if(nums[i] == 0) {
                nums[i] = nums[s];
                nums[s] = 0;
                s++;
                i++;
            }
            else if(nums[i] == 2) {
                nums[i] = nums[e];
                nums[e] = 2;
                e--;
            }
            else {
                i++;
            }
        }
    }
}