#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
    sort(arr, arr+n);
    int small = arr[0];
    int countSmall = 2, indexSmall = 1;
    while(countSmall <= k && indexSmall < n) {
        if(small < arr[indexSmall]) {
            small = arr[indexSmall];
            countSmall++;
        }
        indexSmall++;
    }
    int large = arr[n-1];
    int countLarge = 2, indexLarge = n - 2;
    while(countLarge <= k && indexLarge >= 0) {
        if(large > arr[indexLarge]) {
            large = arr[indexLarge];
            countLarge++;
        }
        indexLarge--;
    }
    if(countSmall == k+1 && countLarge == k+1) {
        cout << large << " " << small << endl;
    }
    else if(countSmall == k+1 && countLarge != k+1) {
        cout << -1 << " " << small << endl;
    }
    else if(countSmall != k+1 && countLarge == k+1) {
        cout << large << " " << -1 << endl;
    }
    else {
        cout << -1 << " " << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}