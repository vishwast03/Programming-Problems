// ------------------------ Approach 1 --------------------------
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        List<Integer> list = new ArrayList<>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        int i = 0, j = 0;
        while(i < nums1.length && j < nums2.length) {
            if(nums1[i] == nums2[j]) {
                int temp = nums1[i];
                list.add(temp);
                
                while(i < nums1.length && nums1[i] == temp)
                    i++;
                
                while(j < nums2.length && nums2[j] == temp)
                    j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        
        int[] res = new int[list.size()];
        for(int idx = 0; idx < list.size(); idx++) {
            res[idx] = list.get(idx);
        }
        
        return res;
    }
}

// -------------------------- Approach 2 (Using built-in set intersection) --------------------------
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> a = new HashSet<>();
        Set<Integer> b = new HashSet<>();
        
        for(int i : nums1) {
            a.add(i);
        }
        for(int i : nums2) {
            b.add(i);
        }
        
        Set<Integer> intersection = new HashSet<>(a);
        intersection.retainAll(b);
        
        int[] res = new int[intersection.size()];
        int i = 0;
        for(int x : intersection) {
            res[i++] = x;
        }
        
        return res;
    }
}

// ----------------------- Approach 3 (using two sets) -----------------------------
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> a = new HashSet<>();
        for(int i : nums1)
            a.add(i);
        
        Set<Integer> b = new HashSet<>();
        for(int i : nums2)
            b.add(i);
        
        if(a.size() < b.size()) return findIntersection(a, b);
        else return findIntersection(b, a);
    }
    
    int[] findIntersection(Set<Integer> a, Set<Integer> b) {
        int[] res = new int[a.size()];
        
        int idx = 0;
        for(int i : a) {
            if(b.contains(i))
                res[idx++] = i;
        }
        
        return Arrays.copyOf(res, idx);
    }
}