class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        int n = 0;
        for (int x : sorted) {
            if (n == 0 || sorted[n - 1] != x) {
                sorted[n++] = x;
            }
        }
        sorted.resize(n);
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = lower_bound(sorted.begin(), sorted.end(), arr[i]) - sorted.begin() + 1;
        }
        return arr;
    }
};