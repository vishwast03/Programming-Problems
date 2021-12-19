public class Solution 
{
    public static void sort012(int[] arr)
    {
        int l = 0, m = 0, r = arr.length - 1;
        while(m <= r) {
            if(arr[m] == 0) {
                int temp = arr[l];
                arr[l] = arr[m];
                arr[m] = temp;
                l++;
                m++;
            }
            else if(arr[m] == 2) {
                int temp = arr[m];
                arr[m] = arr[r];
                arr[r] = temp;
                r--;
            }
            else {
                m++;
            }
        }
    }
}