class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 1, end = arr.length - 2;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;
            else if(arr[mid] > arr[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;
        }
        
        return -1;
    }
}