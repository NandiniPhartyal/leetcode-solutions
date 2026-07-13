class Solution {
public:
    int binarySearch(vector<int>& arr, int s, int e, int key) {
        int start = s;
        int end = e;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key) {
                return mid;
            }
            if (arr[mid] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n - 1;

        // handle duplicates at edges
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) return true;

            // if left part is sorted
            if (nums[s] < nums[mid]) {
                if (nums[s] <= target && target < nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            // if right part is sorted
            else if (nums[s] > nums[mid]) {
                if (nums[mid] < target && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
            // when nums[s] == nums[mid], skip duplicate
            else {
                s++;
            }
        }
        return false;
    }
};
