// ----------------------- SOLUTION 1 - O(n^2) -----------------------
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int[] indices = new int[2];
        
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] + nums[j] == target) {
                    indices[0] = i;
                    indices[1] = j;
                }
            }
        }
        
        return indices;
    }
}

// ----------------------- SOLUTION 2 - O(n) -----------------------
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> m = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++) {
            m.put(nums[i], i);
        }
        
        for(int i = 0; i < nums.length; i++) {
            int diff = target - nums[i];
            
            if(m.containsKey(diff) && m.get(diff) != i) {
                return new int[] {i, m.get(diff)};
            }
        }
        
        return null;
    }
}