class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] > 0 && nums[i] <= nums.size()) {
                int correct = nums[i] - 1;
                if (nums[i] != nums[correct]) {
                    swap(nums, i, correct);
                    continue;
                }
            }
            i++;
        }

        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] != index + 1) {
                return index + 1;
            }
        }
        return nums.size() + 1;
    }

    static void swap(vector<int>& arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
};
