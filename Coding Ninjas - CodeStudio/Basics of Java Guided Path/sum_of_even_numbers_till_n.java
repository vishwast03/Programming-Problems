public class Solution {
	public static long evenSumTillN(int n) {
            
        long sumEven = 0;
        for(int i = 2; i <= n; i += 2) {
            sumEven += i;
        }
            
        return sumEven;
	}
}