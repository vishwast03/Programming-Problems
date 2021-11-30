#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverse(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start < end){
        auto temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    return s;
}

string reverseEachWord(string input)
{
    string out;
    int startOfWord = 0;
    for(int i = 0; i < input.length();i++){
        if(input[i] == ' '){
            out += reverse(input.substr(startOfWord,i - startOfWord));
            startOfWord = i;
        }
        else if(input[startOfWord] == ' '){
            out += " ";
            startOfWord = i;
        }
    }
    out += reverse(input.substr(startOfWord));
    return out;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
}