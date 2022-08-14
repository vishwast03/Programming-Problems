class Solution {
public:
    int getValue(char r) {
        switch(r) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int num = 0;
        int curr = 0, prev = INT_MAX;
        
        for(int i = 0; i < s.size(); i++) {
            curr = getValue(s[i]);
            
            if(prev < curr) {
                num = num + curr - 2*prev;
            }
            else {
                num += curr;
            }
            
            prev = curr;
        }
        return num;
    }
};