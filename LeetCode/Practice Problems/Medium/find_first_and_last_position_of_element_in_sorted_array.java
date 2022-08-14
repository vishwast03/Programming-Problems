class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = {-1, -1};
        
		// Searching for first index with binary search
        int s = 0, e = nums.length - 1;
        int mid = s + (e - s) / 2;
        while(s <= e) {
            if(nums[mid] == target) {
                res[0] = mid;
                e = mid - 1;
            }
            else if (nums[mid] > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        
		// Searching for last index with binary search
        s = 0;
        e = nums.length - 1;
        mid = s + (e - s) / 2;
        while(s <= e) {
            if(nums[mid] == target) {
                res[1] = mid;
                s = mid + 1;
            }
            else if (nums[mid] > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        
        return res;
    }
}