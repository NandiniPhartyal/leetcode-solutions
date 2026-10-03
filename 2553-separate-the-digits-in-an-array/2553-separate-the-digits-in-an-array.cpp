class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            vector<int> digits;
            while(nums[i] > 0) {
                int dig = nums[i] % 10;
                digits.push_back(dig);
                nums[i] = nums[i] / 10;
            }
            reverse(digits.begin(), digits.end());
            for(int digit : digits) {
                ans.push_back(digit);
            }
        }
        return ans;
    }
};