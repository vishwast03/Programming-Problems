class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        int peakIdx = peakIndex(nums, n);
        
        return nums[(peakIdx + 1) % n];
    }
    
    int peakIndex(int[] nums, int n) {
        int start = 0, end = n - 1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid + 1])
                return mid;
            else if(nums[mid] >= nums[start])
                start = mid + 1;
            else
                end = mid - 1;
        }
        
        return start;
    }
}