class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int[] result = new int[n];       
        int l = 0, r = n - 1;
        int pos = n - 1;      
        while (l <= r) {
            int leftSquare = nums[l] * nums[l];
            int rightSquare = nums[r] * nums[r];           
            if (leftSquare > rightSquare) {
                result[pos] = leftSquare;
                l++;
            } else {
                result[pos] = rightSquare;
                r--;
            }
            pos--;
        }        
        return result;
    }
}