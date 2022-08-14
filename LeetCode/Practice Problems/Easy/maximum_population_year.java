class Solution {
    public int maximumPopulation(int[][] logs) {
        int[] years = new int[101];
        
        for(int i = 0; i < logs.length; i++) {
            years[logs[i][0] - 1950]++;
            years[logs[i][1] - 1950]--;
        }
        
        int max = Integer.MIN_VALUE;
        int y = 0;
        int curr = 0;
        for(int i = 0; i < 101; i++) {
            curr += years[i];
            if(curr > max) {
                max = curr;
                y = i + 1950;
            }
        }
        
        return y;
    }
}