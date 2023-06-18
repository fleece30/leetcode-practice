class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, len = 0;
        unordered_set<char> chars;

        while(start <= end && end < s.length()) {
            if(chars.find(s[end]) == chars.end()) {
                chars.insert(s[end]);
                end++;
            } else {
                chars.erase(s[start]);
                start++;
            }
            if(end-start > len) len = end-start;
        }

        return len;
    }
};