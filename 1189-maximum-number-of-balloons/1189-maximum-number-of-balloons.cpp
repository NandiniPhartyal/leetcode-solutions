class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq[26];
        for (int i = 0; i < text.length(); i++) {
            freq[(unsigned char)text[i]- 'a']++;
        }
        int b = freq['b' - 'a'];
        int a = freq['a' - 'a'];
        int l = freq['l' - 'a'] / 2;
        int o = freq['o' - 'a'] / 2;
        int n = freq['n' - 'a'];
        return min(
            min(b, a),
            min(min(l, o), n)
        );
    }
};