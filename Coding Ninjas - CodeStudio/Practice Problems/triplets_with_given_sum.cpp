vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    
    int i = 0;
    while(i < n) {
        
        int j = i + 1, k = n - 1;
        while(j < k) {
            
            if(arr[i] + arr[j] + arr[k] == K) {
                ans.push_back({arr[i], arr[j], arr[k]});
                int x = arr[j];
                int y = arr[k];
                while(j < k && arr[j] == x) {
                    j++;
                }
                while(j < k && arr[k] == y) {
                    k--;
                }
            }
            else if(arr[i] + arr[j] + arr[k] < K) {
                j++;
            }
            else {
                k--;
            }
            
        }
        while(i+1 < n && arr[i] == arr[i+1]) {
            i++;
        }
        i++;
        
    }
    
    return ans;
}