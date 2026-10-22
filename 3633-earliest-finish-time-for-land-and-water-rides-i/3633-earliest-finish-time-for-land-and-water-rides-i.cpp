class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;

        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {
                int a = max(landStartTime[i] + landDuration[i], waterStartTime[j]) + waterDuration[j];
                int b = max(waterStartTime[j] + waterDuration[j], landStartTime[i]) + landDuration[i];
                ans = min(ans, min(a, b));
            }
        }

        return ans;
    }
};