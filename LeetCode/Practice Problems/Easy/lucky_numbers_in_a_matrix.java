// ---------------------- SOLUTION 1 (Slow) ---------------------------
class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        
        int[] minRow = new int[m];
        Arrays.fill(minRow, Integer.MAX_VALUE);
        
        int[] maxCol = new int[n];
        Arrays.fill(maxCol, Integer.MIN_VALUE);
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < minRow[i])
                    minRow[i] = matrix[i][j];
                
                if(matrix[i][j] > maxCol[j])
                    maxCol[j] = matrix[i][j];
            }
        }
        
        List<Integer> res = new ArrayList<>();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(minRow[i] == maxCol[j])
                    res.add(minRow[i]);
            }
        }
        
        return res;
    }
}

// ---------------------- SOLUTION 2 (Fast) ---------------------------
class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        List<Integer> res = new ArrayList<>();
        int m = matrix.length;
        int n = matrix[0].length;
        
        for(int i = 0; i < m; i++) {
            int min = matrix[i][0];
            int ind = 0;
            
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < min) {    // Determining the minimum number in current row
                    min = matrix[i][j];
                    ind = j;
                }
            }
            
            int max = matrix[i][ind];
            for(int j = 0; j < m; j++) {    // Determining the maximum number in the column in which we found minimum number of current row
                if(matrix[j][ind] > max)
                    max = matrix[j][ind];
            }
            
            if(min == max)    // Checking if the minimum and maximum numbers are same
                res.add(max);
        }
        
        return res;
    }
}