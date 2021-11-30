#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int arr[26] = {0};
    int i = 0;
    while(input1[i] != '\0') {
        arr[input1[i] - 'a']++;
        i++;
    }
    i = 0;
    while(input2[i] != '\0') {
        arr[input2[i] - 'a']--;
        i++;
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i] != 0)
            return false;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}