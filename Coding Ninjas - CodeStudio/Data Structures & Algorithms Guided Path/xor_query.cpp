#include <algorithm>
vector<int> xorQuery(vector<vector<int>> &queries)
{
    vector<int> result;
	int x = 0;
    for(int i = queries.size() - 1; i >= 0; i--) {
        int q = queries[i][0];
        int val = queries[i][1];
        
        if(q == 1) {
            result.push_back(val ^ x);
        }
        else {
            x = x ^ val;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}