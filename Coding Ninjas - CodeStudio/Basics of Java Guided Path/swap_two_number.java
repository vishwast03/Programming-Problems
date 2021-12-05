import javafx.util.Pair;

public class Solution {
    public static Pair < Integer, Integer > swap(Pair < Integer, Integer > swapValues) {
        Pair ans = new Pair(swapValues.getValue(), swapValues.getKey());
        return ans;
    }
}