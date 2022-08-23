/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int peak = findPeakIndex(mountainArr);    // finding the peak index in the mountain array
        
        int firstIndex = binarySearch(mountainArr, target, 0, peak, true);    // searching for target in accending part of the mountain array
        int secondIndex = binarySearch(mountainArr, target, peak + 1, mountainArr.length() - 1, false);    // searching for target in descending part of the mountain array
        
        if(firstIndex != -1)
            return firstIndex;    // returning the index of target if it is found in the first part of the array
        else
            return secondIndex;    // returning the index of target if it is found in the second part of the array else -1
    }
    
    // function for binary search
    int binarySearch(MountainArray mountainArr, int target, int start, int end, boolean isAccending) {
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(mountainArr.get(mid) == target) {
                return mid;
            }
            else if(mountainArr.get(mid) < target) {
                if(isAccending)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else {
                if(isAccending)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return -1;
    }
    
    // function to find peak index in a mountain array
    int findPeakIndex(MountainArray mountainArr) {
        int start = 0, end = mountainArr.length() - 1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1))
                start = mid + 1;
            else
                end = mid;
        }
        
        return start;
    }
}