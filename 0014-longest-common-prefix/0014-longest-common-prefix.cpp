class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = strs[0].length();

        for (string str : strs)
            minLen = min(minLen, (int)str.length());

        string res = "";

        for (int i = 0; i < minLen; i++) {
            char ch = strs[0][i];

            for (string str : strs) {
                if (str[i] != ch) {
                    return res;
                }
            }

            res += ch;
        }

        return res;
    }
};