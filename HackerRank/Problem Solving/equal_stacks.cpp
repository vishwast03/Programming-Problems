#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */
 
int makeEqualStacks(vector<int> a1, vector<int> a2, vector<int> a3) {
    
    int result = 0;
    int i;
    for(i = 0; i < a1.size(); i++) {
        bool c1 = false, c2 = false;
        
        for(int j = 0; j < a2.size(); j++) {
            if(a2[j] == a1[i]) {
                c1 = true;
                break;
            }
        }
        
        for(int j = 0; j < a3.size(); j++) {
            if(a3[j] == a1[i]) {
                c2 = true;
                break;
            }
        }
        
        if(c1 && c2) {
            result = a1[i];
            break;
        }
        
    }
    
    return result;
    
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    
    if(h1.size() == 0 || h2.size() == 0 || h3.size() == 0)
        return 0;
    
    int n1 = h1.size(), n2 = h2.size(), n3 = h3.size();
    vector<int> arr1(h1);
    vector<int> arr2(h2);
    vector<int> arr3(h3);
    
    for(int i = n1 - 2; i >=0; i-- ) {
        arr1[i] = arr1[i+1] + h1[i];
    }
    for(int i = n2 - 2; i >=0; i-- ) {
        arr2[i] = arr2[i+1] + h2[i];
    }
    for(int i = n3 - 2; i >=0; i-- ) {
        arr3[i] = arr3[i+1] + h3[i];
    }
    
    int ans = 0;
    if(arr1[0] <= arr2[0] && arr1[0] <= arr3[0]) {
        ans = makeEqualStacks(arr1, arr2, arr3);
    }
    else if(arr2[0] <= arr3[0] && arr2[0] <= arr1[0]) {
        ans = makeEqualStacks(arr2, arr1, arr3);
    }
    else {
        ans = makeEqualStacks(arr3, arr1, arr2);
    }
    
    return ans;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n1 = stoi(first_multiple_input[0]);

    int n2 = stoi(first_multiple_input[1]);

    int n3 = stoi(first_multiple_input[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split(rtrim(h1_temp_temp));

    vector<int> h1(n1);

    for (int i = 0; i < n1; i++) {
        int h1_item = stoi(h1_temp[i]);

        h1[i] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split(rtrim(h2_temp_temp));

    vector<int> h2(n2);

    for (int i = 0; i < n2; i++) {
        int h2_item = stoi(h2_temp[i]);

        h2[i] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split(rtrim(h3_temp_temp));

    vector<int> h3(n3);

    for (int i = 0; i < n3; i++) {
        int h3_item = stoi(h3_temp[i]);

        h3[i] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

