class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        for(int i = 0; i < 4; i++) {
            if(checkMatrix(mat, target))
                return true;
            
            mat = rotateMatrix(mat);
        }
        
        return false;
    }
    
    int[][] rotateMatrix(int[][] mat) {
        int n = mat.length;
        int[][] res = new int[n][n];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                res[j][n - i - 1] = mat[i][j];
            }
        }
        
        return res;
    }
    
    boolean checkMatrix(int[][] mat, int[][] target) {
        int n = mat.length;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] != target[i][j])
                    return false;
            }
        }
        
        return true;
    }
}