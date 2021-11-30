function sort012(arr, n) {
    let low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            let temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 2) {
            let temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
        else {
            mid++;
        }
    }
}