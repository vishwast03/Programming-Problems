#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int x = 0, y = n-1;
    while(x < y) {
        int temp = arr[x];
        arr[x++] = arr[y];
        arr[y--] = temp;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}