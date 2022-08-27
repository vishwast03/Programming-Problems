// ------------------- Brute Force -----------------------------------------
class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> list = new ArrayList<>();
        
        Arrays.sort(nums);
        
        int firstIndex = searchIndex(nums, target, true);
        if(firstIndex != -1) {
            int lastIndex = searchIndex(nums, target, false);
            
            for(int i = firstIndex; i <= lastIndex; i++) {
                list.add(i);
            }
        }
        
        return list;
    }
    
    int searchIndex(int[] nums, int target, boolean searchFirst) {
        int start = 0, end = nums.length - 1;
        int idx = -1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] == target) {
                idx = mid;
                
                if(searchFirst)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return idx;
    }
}

// ---------------------- Optimized -------------------------------------
class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int count = 0;
        int lessThanTarget = 0;
        
        for(int i : nums) {
            if(i == target)
                count++;
            
            if(i < target)
                lessThanTarget++;
        }
        
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < count; i++) {
            list.add(i + lessThanTarget);
        }
        
        return list;
    }
}