class Solution {
    public boolean isPowerOfFour(int n) {
        if(n <= 0)
            return false;    // returning false for negative numbers
        
        if((n & (n - 1)) == 0) {    // checking if the number is power of two or not
            int c = 0;
            while(n != 1) {
                c++;    // counting the number of 0 bits
                n = n >>> 1;
            }
            
            if(c % 2 == 0)    // if no. of 0 bits is even, then n is power of four
                return true;
        }
        
        return false;
    }
}