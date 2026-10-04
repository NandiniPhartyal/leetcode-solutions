class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int lp1 = 0;
        int lp2 = 0;

        if (nums1[0] < nums2[0]) {
            while (lp2 < nums2.length) {
                int target = nums2[lp2];

                if (BinarySearch(nums1, target) != -1) {
                    return target;
                } else {
                    lp2++;
                }
            }
        } 
        else if (nums1[0] > nums2[0]) {
            while (lp1 < nums1.length) {
                int target = nums1[lp1];

                if (BinarySearch(nums2, target) != -1) {
                    return target;
                } else {
                    lp1++;
                }
            }
        } 
        else {
            return nums1[0];
        }

        return -1;
    }

    public int BinarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > target) {
                end = mid - 1;
            } 
            else if (arr[mid] < target) {
                start = mid + 1;
            } 
            else {
                return mid;
            }
        }

        return -1;
    }
}