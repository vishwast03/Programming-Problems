#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    for(int i = 2; i <= sqrt(x); i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int totalPrime(int s, int e) {
    int count = 0;
    for(int i = s; i <= e; i++) {
        if(isPrime(i))
            count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}