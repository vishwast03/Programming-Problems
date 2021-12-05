public class Solution {
	public static int countSetBits(int n) {
		int x = n, count = 0;
        while(n != 0) {
            if((n & 1) == 1)
                count++;
            n = n >> 1;
        }
        return count;
	}
}