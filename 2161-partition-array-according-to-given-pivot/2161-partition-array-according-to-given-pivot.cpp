class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ls;
        vector<int> eq;
        vector<int> gr;

        for(int num: nums){
            if(num<pivot){
                ls.push_back(num);
            }
            else if(num>pivot){
                gr.push_back(num);
            }
            else if(num==pivot){
                eq.push_back(num);
            }
        }

        vector<int> result(nums.size());
        int index=0;

        for(int num:ls){
            result[index++]= num;
        }
        for(int num:eq){
            result[index++]= num;
        }
        for(int num:gr){
            result[index++]= num;
        }
        return result;
    }
};