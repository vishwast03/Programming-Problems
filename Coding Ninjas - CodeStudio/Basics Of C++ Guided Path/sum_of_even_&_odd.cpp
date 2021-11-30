#include <iostream>
using namespace std;

int main() {
	int n, sumEven = 0, sumOdd = 0;
    cin >> n;
    while(n > 0) {
        int d = n % 10;
        n /= 10;
        if(d % 2 == 0)
            sumEven += d;
        else
            sumOdd += d;
    }
    cout << sumEven << " " << sumOdd << endl;
    return 0;
}