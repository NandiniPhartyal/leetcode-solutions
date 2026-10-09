
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            char upper = ch - 'a' + 'A';

            if (word.find(ch) != string::npos &&
                word.find(upper) != string::npos) {
                count++;
            }
        }
        return count;
    }
};