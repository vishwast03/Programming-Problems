class Solution {
    public boolean checkIfPangram(String sentence) {
        boolean[] occ = new boolean[26];
        
        for(int i = 0; i < sentence.length(); i++) {
            char ch = sentence.charAt(i);
            occ[ch - 97] = true;
        }
        
        for(int i = 0; i < 26; i++) {
            if(occ[i] == false)
                return false;
        }
        
        return true;
    }
}