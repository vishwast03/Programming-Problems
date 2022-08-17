class Solution {
    String[] morseTable = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    public int uniqueMorseRepresentations(String[] words) {
        Set<String> morseSet = new HashSet<>();
        
        for(int i = 0; i < words.length; i++) {
            morseSet.add(getMorseCode(words[i]));
        }
        
        return morseSet.size();
    }
    
    String getMorseCode(String word) {
        String res = "";
        
        for(int i = 0; i < word.length(); i++) {
            res = res + morseTable[word.charAt(i) - 97];
        }
        
        return res;
    }
}