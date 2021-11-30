#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int s = 0, e = n - 1;
    int i = 0;
    while(i <= e) {
        if(arr[i] == 0) {
            if(i == s) {
                s++;
                i++;
                continue;
            }
            int temp = arr[i];
            arr[i] = arr[s];
            arr[s] = temp;
            s++;
        }
        else if(arr[i] == 2) {
            int temp = arr[i];
            arr[i] = arr[e];
            arr[e] = temp;
            e--;
        }
        else {
            i++;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}