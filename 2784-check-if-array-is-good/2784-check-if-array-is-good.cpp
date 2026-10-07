class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = 0;

        for (int num : nums) {
            n = max(n, num);
        }
        if (nums.size() != n + 1) {
            return false;
        }
        vector<int> freq(n + 1, 0);

        for (int num : nums) {
            if (num < 1 || num > n) {
                return false;
            }

            freq[num]++;
        }
        for (int i = 1; i < n; i++) {
            if (freq[i] != 1) {
                return false;
            }
        }
        return freq[n] == 2;
    }
};