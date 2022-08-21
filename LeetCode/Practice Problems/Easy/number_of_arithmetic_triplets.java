class Solution {
    public int arithmeticTriplets(int[] nums, int diff) {
        int count = 0;
        
        for(int i = 0; i < nums.length - 2; i++) {
            
            int j = i + 1;
            while(j < nums.length - 1 && nums[j] - nums[i] < diff)
                j++;
            
            if(nums[j] - nums[i] == diff) {
                int k = j + 1;
                
                while(k < nums.length && nums[k] - nums[j] < diff)
                    k++;
                
                if(k < nums.length && nums[k] - nums[j] == diff)
                    count++;
            }
        }
        
        return count;
    }
}