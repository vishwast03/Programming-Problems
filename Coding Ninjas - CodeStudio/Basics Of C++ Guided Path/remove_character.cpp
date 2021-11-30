#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    int i = 0;
    while(i < input.size()) {
        if(input[i] == c){
            input.erase(i,1);
        }
        else {
            i++;
        }
    }
    return input;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}