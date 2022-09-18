class Solution {
    public int lengthOfLastWord(String s) {
        boolean flag = false;
        int i = s.length() - 1, count = 0;
        while(i >= 0) {
            if(s.charAt(i) == ' ') {
                if(flag)
                    break;
            }
            else {
                count++;
                flag = true;
            }
            i--;
        }
        
        return count;
    }
}