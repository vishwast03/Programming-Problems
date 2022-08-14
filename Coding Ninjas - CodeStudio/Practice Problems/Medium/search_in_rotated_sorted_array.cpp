int findPosition(vector<int>& arr, int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(arr[mid] == k) {
            return mid;
        }
        else if(arr[0] <= arr[mid]) {
            if(k >= arr[0] && k <= arr[mid-1]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        else {
            if(k >= arr[mid+1] && k <= arr[n-1]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

