
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            char upper = ch - 'a' + 'A';

            size_t lowerPos = word.find(ch);
            size_t upperPos = word.find(upper);

            if (lowerPos != string::npos &&
                upperPos != string::npos) {
                size_t lastLowerPos = word.rfind(ch);
                if (lastLowerPos < upperPos) {
                    count++;
                }
            }
        }
        return count;
    }
};
