class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        
        for(int i = 0; i < nums.length; i++) {
            if(evenDigits(nums[i]))
                count++;
        }
        
        return count;
    }
    
    boolean evenDigits(int x) {
        int c = 0;
        while(x > 0) {
            x /= 10;
            c++;
        }
        
        if(c % 2 == 0)
            return true;
        
        return false;
    }
}