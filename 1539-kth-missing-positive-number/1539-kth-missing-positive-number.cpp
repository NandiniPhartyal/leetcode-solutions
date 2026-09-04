class Solution 
{
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int missingCount = 0, current = 1, i = 0;
        while (true) {
            if (i < arr.size() && arr[i] == current) {
                i++;
            } else {
                missingCount++;
                if (missingCount == k) return current;
            }
            current++;
        }
    }
};