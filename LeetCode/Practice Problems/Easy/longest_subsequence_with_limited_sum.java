class Solution {
    public int[] answerQueries(int[] nums, int[] queries) {
        int n = nums.length;
        int m = queries.length;
        
        // Sorting array nums
        Arrays.sort(nums);
        
        // Taking prefix sum
        for(int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }
        
        int[] ans = new int[m];
        for(int i = 0; i < m; i++) {
            int q = queries[i];
            
            // performing binary search for each query
            int start = 0, end = n - 1;
            while(start <= end) {
                int mid = start + (end - start) / 2;
                if(nums[mid] == q) {
                    ans[i] = mid + 1;
                    break;
                }
                else if(nums[mid] < q) {
                    ans[i] = mid + 1;
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        
        return ans;
        
    }
}