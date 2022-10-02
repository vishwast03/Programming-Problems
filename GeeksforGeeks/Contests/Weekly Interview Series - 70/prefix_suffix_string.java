class Solution
{
    public int prefixSuffixString(String s1[],String s2[])
    {
        int count = 0;
        outer: for(int i = 0; i < s2.length; i++) {
            
            inner: for(int j = 0; j < s1.length; j++) {
                
                if(s1[j].startsWith(s2[i]) || s1[j].endsWith(s2[i])) {
                    count++;
                    continue outer;
                }
            }
        }
        
        return count;
    }
}