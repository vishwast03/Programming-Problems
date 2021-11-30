#include <iostream>
#include <algorithm>
using namespace std;

string reverseStringWordWise(string input)
{
    string reverseString;
    string word = "";
    int count = 0;
    for (int i = (input.size() - 1); i >= 0; i--)
    {
        if (input[i] == ' ')
        {
            word = input.substr(i + 1, count);
            count = 0;
        }
        else
        {
            count++;
            if (i == 0)
            {
                word = input.substr(0, count);
                count = 0;
            }
        }

        if (count == 0)
        {
            reverseString = reverseString + ' ' + word;
        }
    }
    reverseString.erase(0, 1);

    return reverseString;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;

    return 0;
}