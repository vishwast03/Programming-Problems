class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int count = 0;
        
        int key = 0;
        switch(ruleKey) {
            case "type" -> key = 0;
            case "color" -> key = 1;
            case "name" -> key = 2;
        }
        
        for(int i = 0; i < items.size(); i++) {
            if(items.get(i).get(key).equals(ruleValue))
                count++;
        }
        
        return count;
    }
}