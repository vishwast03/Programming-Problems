int firstOccur(vector<int>& arr, int n, int k) {
    
    int l = 0, r = n - 1;
    int mid = l + (r - l) / 2;
    int ans = -1;
    
    while(l <= r) {
        
        if(arr[mid] == k) {
            ans = mid;
            r = mid - 1;
        }
        else if(arr[mid] < k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
        
        mid = l + (r - l) / 2;
        
    }
    
    return ans;
    
}

int lastOccur(vector<int>& arr, int n, int k) {
    
    int l = 0, r = n - 1;
    int mid = l + (r - l) / 2;
    int ans = -1;
    
    while(l <= r) {
        
        if(arr[mid] == k) {
            ans = mid;
            l = mid + 1;
        }
        else if(arr[mid] < k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
        
        mid = l + (r - l) / 2;
        
    }
    
    return ans;
    
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> ans;
    ans.first = firstOccur(arr, n, k);
    ans.second = lastOccur(arr, n, k);
    return ans;
}