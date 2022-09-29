class Solution {
    public String reverseVowels(String s) {
        
        char[] cArr = s.toCharArray();
        int start = 0, end = s.length() - 1;
        
        while(start < end) {
            while(start < cArr.length && !isVowel(cArr[start])) {
                start++;
            }
            while(end >= 0 && !isVowel(cArr[end])) {
                end--;
            }
            
            if(start < end) {
                char temp = cArr[start];
                cArr[start] = cArr[end];
                cArr[end] = temp;
                start++;
                end--;
            }
        }
        
        return new String(cArr);
        
    }
    
    boolean isVowel(char ch) {
        ch = Character.toLowerCase(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        
        return false;
    }
}