// --------------------- Approach 1 -------------------------
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] res = new int[m + n];
        
        int i = 0, j = 0, k = 0;
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                res[k] = nums1[i];
                i++;
            }
            else {
                res[k] = nums2[j];
                j++;
            }
            k++;
        }
        
        while(i < m) {
            res[k] = nums1[i];
            i++;
            k++;
        }
        while(j < n) {
            res[k] = nums2[j];
            j++;
            k++;
        }
        
        for(int idx = 0; idx < m + n; idx++) {
            nums1[idx] = res[idx];
        }
    }
}

// ------------------------------ Approach 2 ---------------------------------
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1, j = n - 1, x = m + n - 1;
        
        while(i >= 0 && j >= 0) {
            if(nums1[i] >= nums2[j]) nums1[x--] = nums1[i--];
            else nums1[x--] = nums2[j--];
        }
        
        while(i >= 0) {
            nums1[x--] = nums1[i--];
        }
        while(j >= 0) {
            nums1[x--] = nums2[j--];
        }
    }
}