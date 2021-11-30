#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    int n = input.size();
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << input.substr(i, len) << endl;
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}