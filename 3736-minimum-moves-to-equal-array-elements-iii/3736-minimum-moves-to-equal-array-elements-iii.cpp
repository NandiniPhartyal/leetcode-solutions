class Solution {
public:
    int minMoves(vector<int>& nums) {
        int MaxVal = nums[0]; int sum=0;
        for (int num:nums) {
            MaxVal =max(MaxVal, num); 
        }
        for(int num:nums){
            sum+=(MaxVal-num);
        }
        return sum;
    }
};