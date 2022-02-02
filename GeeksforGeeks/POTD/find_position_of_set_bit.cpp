// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        if(N < 1) {
            return -1;
        }
        
        int pos = 1;
        while(N > 0) {
            if(N & 1 == 1) {
                if(N >> 1 > 0) {
                    return -1;
                }
                else {
                    return pos;
                }
            }
            pos++;
            N = N >> 1;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends