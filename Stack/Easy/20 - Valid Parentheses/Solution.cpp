class Solution {
public:
    bool isValid(string s) {
        stack<char> ps;
        unordered_map<char,char> pairs;
        pairs['('] = ')';
        pairs['['] = ']';
        pairs['{'] = '}';
        for(int i=0;i<s.length();i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ps.push(s[i]);
            } else {
                if(ps.empty() || pairs[ps.top()] != s[i]) return false;
                ps.pop();
            }
        }
        return ps.empty() ? true : false;
    }
};