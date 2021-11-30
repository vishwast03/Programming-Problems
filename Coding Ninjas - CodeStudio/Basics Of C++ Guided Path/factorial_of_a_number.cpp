#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    if(n == 0) {
        cout << "1" << endl;
    }
    else if(n < 0) {
        cout << "Error" << endl;
    }
    else {
        int f = 1;
        for(int i = 2; i <= n; i++) {
            f *= i;
        }
        cout << f << endl;
    }
    return 0;
}