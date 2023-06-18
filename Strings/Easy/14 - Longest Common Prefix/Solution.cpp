class Solution {
public:
    Solution* children[26];
    bool isEndOfWord;
    Solution () {
        for(int i=0;i<26;i++) {
            children[i] = NULL;
        }
        isEndOfWord = false;
    }

    void insert(Solution* root, string str) {
        Solution* current = root;
        for(int i=0;i<str.length();i++) {
            int index = str[i] - 'a';
            if(current->children[index] == NULL) {
                current->children[index] = new Solution();
            }
            current = current->children[index];
        }
        current->isEndOfWord = true;
    }

    bool isBranch(Solution* root) {
        Solution* current = root;
        int count = 0;
        for(int i=0;i<26;i++) {
            if(current->children[i] != NULL) {
                count++;
            }
            if(count > 1) break;
        }
        return count == 1 ? false : true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        Solution* root = new Solution();

        for(int i=0;i<strs.size();i++) {
            root->insert(root, strs[i]);
        }

        string commonPrefix = "";
        Solution* current = root;

        while(current && !current->isEndOfWord && !isBranch(current)) {
            for(int i=0;i<26;i++) {
                if(current->children[i] != NULL) {
                    commonPrefix+=i+'a';
                    current = current->children[i];
                    break;
                }
            }
        }
        return commonPrefix;
    }
};