class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n, i, j;
        n = nums.size();
        if(n==1)
            return;
        i = n-2;
        while(i>=0 && nums[i+1]<=nums[i]) 
        {
            i--;
        }
        if(i>=0) {
            j = n-1;
            while(nums[j]<=nums[i])
                j--;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            reverse(nums.begin()+i+1, nums.end());
            return;
        }
        reverse(nums.begin(),nums.end());
        return;
    }
};