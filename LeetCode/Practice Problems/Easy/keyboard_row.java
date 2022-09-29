class Solution {
    public String[] findWords(String[] words) {
        List<String> res = new ArrayList<>();
        
        for(int i = 0; i < words.length; i++) {
            boolean[] keyRows = {false, false, false};
            
            for(int j = 0; j < words[i].length(); j++) {
                int row = findRow(words[i].charAt(j));
                keyRows[row] = true;
            }
            
            int c  = 0;
            for(boolean x : keyRows) {
                if(x) c++;
            }
            if(c == 1) res.add(words[i]);
        }
        
        return res.stream().toArray(String[]::new);
    }
    
    int findRow(char ch) {
        String[] rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        ch = Character.toLowerCase(ch);
        
        for(int i = 0; i < 3; i++) {
            if(rows[i].indexOf(ch) != -1)
                return i;
        }
        
        return -1;
    }
}