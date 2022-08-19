class Solution {
    public int searchInsert(int[] nums, int target) {
        int start = 0, end = nums.length - 1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;
        }
        
        return start;
    }
}