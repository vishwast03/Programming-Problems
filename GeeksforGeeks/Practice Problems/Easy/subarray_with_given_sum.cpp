// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0, h = 0;
        long long currSum = arr[0];
        vector<int> res;
        while(l < n && h < n) {
            if(currSum == s) {
                res.push_back(l+1);
                res.push_back(h+1);
                return res;
            }
            else if(currSum < s) {
                currSum += arr[++h];
            }
            else {
                currSum -= arr[l++];
            }
        }
        res.push_back(-1);
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends