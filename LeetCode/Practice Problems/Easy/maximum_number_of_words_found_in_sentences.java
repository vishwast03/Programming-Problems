class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxWords = 0;
        
        for(int i = 0; i < sentences.length; i++) {
            int words = countWords(sentences[i]);
            if(words > maxWords)
                maxWords = words;
        }
        
        return maxWords;
    }
    
    int countWords(String sentence) {
        int count = 0;
        for(int i = 0; i < sentence.length(); i++) {
            if(sentence.charAt(i) == ' ')
                count++;
        }
        return count + 1;
    }
}