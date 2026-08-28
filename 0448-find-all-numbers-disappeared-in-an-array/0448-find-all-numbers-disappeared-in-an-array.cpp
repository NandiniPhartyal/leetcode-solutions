class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            int correct = nums[i] - 1;
            if (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[correct]) {
                swap(nums, i, correct);
            } else {
                i++;
            }
        }

        vector<int> ans;  
        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] != index + 1) {
                ans.push_back(index + 1);  
            }
        }
        return ans;
    }

    void swap(vector<int>& arr, int first, int second) {  
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
};
