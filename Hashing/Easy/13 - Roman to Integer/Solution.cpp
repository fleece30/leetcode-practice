class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> dict;
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;
        for(int i=0;i<s.length();i++) {
            if(i==s.length()-1) {
                res+=dict[s[i]];
                break;
            }
            if(dict[s[i]] >= dict[s[i+1]]) {
                res+=dict[s[i]];
            } else {
                res+=dict[s[i+1]] - dict[s[i]];
                i++;
            }
        }
        return res;
    }
};