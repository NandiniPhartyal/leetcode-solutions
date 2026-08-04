class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            int correct = nums[i];
            if (nums[i] < nums.size() && nums[i] != nums[correct]) {
                swap(nums, i, correct);
            } else {
                i++;
            }
        }

        // search for missing number
        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] != index) {
                return index;
            }
        }

        // case 2
        return nums.size();
    }

    void swap(vector<int>& arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
};
