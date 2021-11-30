vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
   	long long mo=1000000007;
   	long long l,r;
   	vector<int> ans;
   	vector<int> prefix_sum(n+1);
   	prefix_sum[0]=0;
   	for(long long i=0;i<n;i++) {
      	prefix_sum[i+1]=(prefix_sum[i]% mo + arr[i] % mo) % mo;
   	}
   	long long temp=0;
   	for(long long i=0;i<q;i++) {
       	l=queries[i][0] - 1;
       	r=queries[i][1];

       	temp= (prefix_sum[r%n] - prefix_sum[l%n] + (prefix_sum[n] * ((r/n - l/n) % mo))) %mo;

		ans.push_back((temp + mo)% mo);
   	}
   	return ans;
}