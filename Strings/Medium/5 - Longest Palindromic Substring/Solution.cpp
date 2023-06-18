class Solution {
public:
    string ans = "";
    int maxlen = 0;
    void expand(string& s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            if(right - left + 1 > maxlen) {
                ans = s.substr(left, right - left + 1);
                maxlen = right - left + 1;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        for(int i=0;i<s.length();i++) {
            expand(s, i, i);
            expand(s, i, i+1);
        }
        return ans;
    }
};