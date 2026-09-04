class Solution 
{
    public int findKthPositive(int[] arr, int k) 
    {
        int missingCount = 0, current = 1, i = 0;
        int n= arr.length;
        while (true) 
        {
            if (i < n && arr[i] == current) {
                i++;
            } else {
                missingCount++;
                if (missingCount == k) return current;
            }
            current++;
        }
    }
}