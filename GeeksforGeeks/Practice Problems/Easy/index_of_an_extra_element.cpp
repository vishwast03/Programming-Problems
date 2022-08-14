// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        int s = 0, e = n-1;
        int mid = s + (e - s) / 2;
        int x;
        while(s <= e) {
            if(a[mid] == b[mid]) {
                s = mid + 1;
            }
            else {
                x = mid;
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return x;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends