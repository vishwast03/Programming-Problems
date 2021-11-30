#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}