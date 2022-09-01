class Solution {
    public int specialArray(int[] nums) {
        int n = nums.length;
        
        Arrays.sort(nums);
        
        int start = 1, end = n;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            int greater = greaterThanX(nums, mid);
            
            if(mid == greater) {
                return mid;
            }
            else if(mid < greater) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return -1;
    }
    
    int greaterThanX(int[] nums, int x) {
        int count = 0;
        
        for(int i : nums) {
            if(i >= x)
                count++;
        }
        
        return count;
    }
}