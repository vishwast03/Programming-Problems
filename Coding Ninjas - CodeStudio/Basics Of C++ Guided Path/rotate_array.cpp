#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    int rotated[n];
    for(int i = 0; i < n; i++) {
        int j = i - k;
        if(j < 0)
            j = n - k + i;
        rotated[j] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;
    return 0;
}