// --------------------- SOLUTION 1 (Slower) --------------------------
class Solution {
    public int[] plusOne(int[] digits) {
        List<Integer> list = new ArrayList<>();
        int k = 1, ind = digits.length;
        
        while(--ind >= 0 || k > 0) {
            if(ind >= 0)
                k += digits[ind];
            
            list.add(k % 10);
            k /= 10;
        }
        
        Collections.reverse(list);
        int[] res = new int[list.size()];
        for(int i = 0; i < list.size(); i++) {
            res[i] = list.get(i);
        }
        
        return res;
    }
}

// --------------------- SOLUTION 2 (Faster) --------------------------
class Solution {
    public int[] plusOne(int[] digits) {
        int k = 1;
        for(int i = digits.length - 1; i >= 0; i--) {
            int sum = digits[i] + k;
            k = sum / 10;
            digits[i] = sum % 10;
        }
        if(k == 1) {
            int[] res = new int[digits.length + 1];
            res[0] = 1;
            return res;
        }
        else {
            return digits;
        }
    }
}