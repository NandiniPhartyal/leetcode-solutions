class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mLen=1, in=1, dc=1;
        int n= nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                in++;
                dc=1;
            }
            else if(nums[i]<nums[i-1]){
                dc++;
                in=1;
            }
            else{
                in=1;
                dc=1;
            }
            mLen= max(mLen, max(in,dc));
        }
        return mLen;
    }
};