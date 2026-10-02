class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot= findPivot(nums);
        if(pivot==-1){
            return BinarySearch(nums,target,0,nums.size()-1);
        }
        if(nums[pivot]==target){
            return pivot;
        }
        if(target>=nums[0]){
            return BinarySearch(nums,target,0,pivot-1);
        }
        return BinarySearch(nums,target,pivot+1,nums.size()-1);
    }
    int findPivot(vector<int>& nums){
        int start=0;
        int end= nums.size()-1;
        while(start<end){
            int mid= start+(end-start)/2;
            if(mid<end && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(mid>start && nums[mid-1]>nums[mid]){
                return mid-1;
            }
            else if(nums[mid]>=nums[start]){
                start= mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    int BinarySearch(vector<int>& nums, int target, int start, int end){
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};