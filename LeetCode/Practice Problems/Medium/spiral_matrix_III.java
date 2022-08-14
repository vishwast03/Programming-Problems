class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] coordinates = new int[rows * cols][2];
        coordinates[0][0] = rStart;
        coordinates[0][1] = cStart;
        
        int top = rStart, bottom = rStart;
        int left = cStart, right = cStart;
        int index = 1;
        
        while(index < rows * cols) {
            for(int i = left + 1; i <= right + 1; i++) {
                if(top >= 0 && top < rows && i >= 0 && i < cols) {
                    coordinates[index][0] = top;
                    coordinates[index][1] = i;
                    index++;
                }
            }
            right++;
            
            for(int i = top + 1; i <= bottom + 1; i++) {
                if(right >= 0 && right < cols && i >= 0 && i < rows) {
                    coordinates[index][0] = i;
                    coordinates[index][1] = right;
                    index++;
                }
            }
            bottom++;
            
            for(int i = right - 1; i >= left - 1; i--) {
                if(bottom >= 0 && bottom < rows && i >= 0 && i < cols) {
                    coordinates[index][0] = bottom;
                    coordinates[index][1] = i;
                    index++;
                }
            }
            left--;
            
            for(int i = bottom - 1; i >= top - 1; i--) {
                if(left >= 0 && left < cols && i >= 0 && i < rows) {
                    coordinates[index][0] = i;
                    coordinates[index][1] = left;
                    index++;
                }
            }
            top--;
        }
        
        return coordinates;
    }
}