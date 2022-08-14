class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;
        
        for(int i = 0; i < n; i++) {
            
            int x = 0, y = n - 1;
            while(x <= y) {
                int temp = image[i][x];
                image[i][x] = image[i][y] == 1 ? 0 : 1;
                image[i][y] = temp == 1 ? 0 : 1;
                x++;
                y--;
            }
        }
        return image;
    }
}