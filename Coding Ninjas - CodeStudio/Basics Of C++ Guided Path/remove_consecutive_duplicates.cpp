#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    int x = 0;
    string ans = "";
    ans = ans + input[0];
    for(int i = 1; i < input.size(); i++) {
        if(input[i] != ans[x]) {
            ans = ans + input[i];
            x++;
        }
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}