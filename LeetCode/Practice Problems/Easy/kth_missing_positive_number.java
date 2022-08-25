// ----------------------- Brute force -------------------------
class Solution {
    public int findKthPositive(int[] arr, int k) {
        int x = 1, i = 0;
        
        while(i < arr.length && k > 0) {
            if(x == arr[i]) {
                i++;
            }
            else {
                k--;
            }
            x++;
        }
        
        if(k != 0) {
            x = x + k;
        }
        
        return x - 1;
    }
}

// ------------------------- Binary Search ------------------------
class Solution {
    public int findKthPositive(int[] arr, int k) {
        if(k < arr[0])
            return k;
        
        int start = 0, end = arr.length - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(countMissing(arr[mid], mid) < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return arr[end] + k - countMissing(arr[end], end);
    }
    
    int countMissing(int num, int idx) {
        return num - idx - 1;
    }
}