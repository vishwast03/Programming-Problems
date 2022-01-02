#define mod 1000000007
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    long long pSum[n+1];
    vector<int> resultSum;
    pSum[0] = 0;
    for(int i = 0; i < n; i++) {
        pSum[i+1] = (pSum[i] % mod + arr[i] % mod) % mod;
    }
    
    long long ans = 0;
    for(int i = 0; i < q; i++) {
        long long l = queries[i][0] - 1;
        long long r = queries[i][1];
        
        ans = (pSum[r%n] - pSum[l%n] + (pSum[n] * ((r/n - l/n) % mod))) % mod;
        resultSum.push_back((ans + mod) % mod);
    }
    return resultSum;
}